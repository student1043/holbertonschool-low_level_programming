#!/bin/bash
wget -q -O /./lottery.so https://github.com/student1043/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/lottery.so 
export LD_PRELOAD=/./lottery.so
