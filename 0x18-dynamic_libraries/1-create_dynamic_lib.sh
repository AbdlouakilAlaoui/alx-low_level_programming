#!/bin/bash
gcc -fPTC -c *.c
gcc -shared *.o -o gm
