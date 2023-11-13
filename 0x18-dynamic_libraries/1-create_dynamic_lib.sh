#!/bin/bash
gcc -c -fpic *.c
gcc -shared *.o -0 liball.s
