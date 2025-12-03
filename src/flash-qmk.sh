#!/usr/bin/env sh

dfu-util -d 0483:df11 -a 0 -s 0x08000000:leave -D ~/src/vendor/keychron_qmk_firmware/keychron_k2_he_ansi_keychron.bin

