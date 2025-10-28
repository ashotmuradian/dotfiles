#!/usr/bin/env sh

words=$( \
  curl -L "https://github.com/monkeytypegame/monkeytype/raw/refs/heads/master/frontend/static/languages/english_1k.json" \
  | jq ".words[]" -r \
)

for k in {0..9}; do
  echo $words | tr ' ' '\n' | sort | tail -$((1000 - $k * 100)) | head -100 | wl-copy
  read -n 1 -s -r -p $'words from '$(($k * 100))$' to '$((($k + 1) * 100))$' copied with wl-copy, press any key to continue\n'
done

