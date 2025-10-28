#!/usr/bin/env sh

pushd ~/src/dotnet-src || exit

while IFS= read -r i; do
  pushd "$i"
  git worktree list | cut -d " " -f1 | tail +2 | xargs -r -L 1 git worktree remove 
  popd
done <<< $(ls ./)

popd
