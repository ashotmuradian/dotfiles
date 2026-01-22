#!/usr/bin/env sh

pushd ~/src/vendor/keychron_qmk_firmware

# keyboards/keychron/k2_he/readme.md
./util/docker_build.sh keychron/k2_he/ansi:keychron
r=$?

popd

exit $r
