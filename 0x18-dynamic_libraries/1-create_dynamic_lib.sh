#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -0 liball.so
