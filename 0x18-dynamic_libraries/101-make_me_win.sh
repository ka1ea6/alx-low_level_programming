#!/bin/bash
wget -p /tmp/ "https://www.github.com/ka1ea6/alx-low_level_programming/0x18-dynamic_libraries/inject.so"
export LD_PRELOAD=/tmp/inject.so
