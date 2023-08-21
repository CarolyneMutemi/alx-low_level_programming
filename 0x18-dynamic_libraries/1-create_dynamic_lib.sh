#!/bin/bash
gcc -c *.c -fpic
gcc -shared -fpic *.o -o liball.so
