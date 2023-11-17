#!/bin/bash
gcc -Wall -pedantic -Warror -WWextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
