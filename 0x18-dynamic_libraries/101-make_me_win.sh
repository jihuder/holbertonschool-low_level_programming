#!/bin/bash
wget -P /tmp https://github.com/jihuder/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/compli.so
export LD_PRELOAD=/tmp/compli.so
