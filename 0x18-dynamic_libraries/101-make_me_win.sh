#!/bin/bash
wget -p /tmp/ "https://raw.github.com/ka1ea6/alx-low_level_programming/master/0x18-dynamic_libraries/inject.so"
export LD_PRELOAD=/tmp/inject.so
