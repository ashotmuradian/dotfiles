#!/usr/bin/env sh
set -e

N="$1"

ws=$(hyprctl activeworkspace -j | jq ".id")
wnds=$(hyprctl clients -j | jq "map(select(.workspace.id == $ws)) | sort_by(.at)")
addr=$(echo "$wnds" | jq -r ".[$((N-1))].address")
hyprctl dispatch focuswindow address:"$addr"

