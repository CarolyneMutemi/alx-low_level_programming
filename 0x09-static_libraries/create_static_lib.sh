#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c *.c
ar -cr liball.a *.o
ranlib liball.a
