#!/bin/bash
wget -nv -P ../ https://github.com/CarolyneMutemi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/print.so
export LD_PRELOAD=../print.so
