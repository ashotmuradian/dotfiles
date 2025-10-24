#!/bin/sh

sources=(
  "https://github.com/dotnet/aspnetcore.git"
  "https://github.com/dotnet/roslyn.git"
  "https://github.com/dotnet/runtime.git"
  "https://github.com/dotnet/efcore.git"
  "https://github.com/dotnet/msbuild.git"
  "https://github.com/dotnet/docs.git"
  "https://github.com/dotnet/docfx.git"
  "https://github.com/dotnet/samples.git"
  "https://github.com/dotnet/command-line-api.git"
  "https://github.com/dotnet/sdk.git"
)

for i in "${sources[@]}"; do
  git clone "$i" &
done

wait
