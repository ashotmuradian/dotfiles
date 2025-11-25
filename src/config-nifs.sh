#!/usr/bin/env sh
sysctl -w net.ipv6.conf.all.disable_ipv6=1
networkctl down enp5s0 wlan0
