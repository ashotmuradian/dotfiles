#!/usr/bin/env sh

v=$1
if [[ -z $v ]]; then
  v="10"
fi


curl -s "https://dotnetcli.blob.core.windows.net/dotnet/release-metadata/$v.0/releases.json" \
  | jq '.releases[].sdk.version'



