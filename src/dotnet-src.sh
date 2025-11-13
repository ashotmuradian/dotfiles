#!/usr/bin/env sh

mkdir -p ~/src/dotnet-src

pushd ~/src/dotnet-src

git clone --bare "https://github.com/dotnet/aspnetcore.git" aspnetcore &
git clone --bare "https://github.com/dotnet/efcore.git" efcore &
git clone --bare "https://github.com/dotnet/runtime.git" runtime &
git clone --bare "https://github.com/dotnet/sdk.git" sdk &
git clone --bare "https://github.com/dotnet/roslyn.git" roslyn &
git clone --bare "https://github.com/dotnet/msbuild.git" msbuild &
git clone "https://github.com/dotnet/command-line-api.git" command-line-api &
git clone "https://github.com/dotnet/docfx.git" docfx &
git clone "https://github.com/dotnet/docs.git" docs &
git clone "https://github.com/dotnet/samples.git" samples &
git clone "https://github.com/microsoft/MIEngine" miengine &

wait

runtimeVersions=$(\
  dotnet --list-runtimes \
  | grep "Microsoft\.NETCore\.App" \
  | grep -Eo "[0-9]+\.[0-9]+\.[0-9]+"
)

sdkVersions=$(\
  dotnet --list-sdks \
  | grep -Eo "[0-9]+\.[0-9]+\.[0-9]+"
)

for i in {aspnetcore,efcore,runtime}; do
  pushd $i
  while IFS= read -r j; do
    git worktree add --detach "v$j" "tags/v$j"
  done <<< $runtimeVersions
  popd
done

pushd sdk
while IFS= read -r i; do
  c=$(\
    dotnet "$(dirname $(which dotnet))/sdk/$i/dotnet.dll" --info \
    | grep -iA5 -m1 "NET SDK" \
    | grep -i "Commit:" \
    | sed -E "s/[ \t]*Commit:[ \t]+//gi"
  )
  if ! git worktree add --detach "v$i" "$c"; then
    git worktree add --detach "v$i" "tags/v$i"
  fi
done <<< $sdkVersions
popd

pushd roslyn
while IFS= read -r i; do
  c=$(\
    dotnet "$(dirname $(which dotnet))/sdk/$i/Roslyn/bincore/csc.dll" -version \
    | cut -d " " -f2 \
    | grep -Eo "[^()]+"
  )
  git worktree add --detach "NET-SDK-$i" "$c"
done <<< $sdkVersions
popd

pushd msbuild
while IFS= read -r i; do
  v=$(\
    dotnet "$(dirname $(which dotnet))/sdk/$i/dotnet.dll" msbuild /version \
    | grep -Eo "[0-9]+\.[0-9]+\.[0-9]+" \
    | uniq
  )
  c=$(\
    dotnet "$(dirname $(which dotnet))/sdk/$i/dotnet.dll" msbuild /version \
    | grep -Eo "\+[^ ]+" \
    | cut -d "+" -f2
  )
  git worktree add --detach "v$v" "$c"
done <<< $sdkVersions
popd

popd

