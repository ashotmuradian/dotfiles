#!/usr/bin/env sh

versions=$(\
  dotnet --list-runtimes \
  | grep "Microsoft\.NETCore\.App" \
  | grep -Eo "[0-9]+\.[0-9]+\.[0-9]+"
)

for v in $versions; do
  git worktree add --detach "v$v" "tags/v$v"
done

