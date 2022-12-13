#!/usr/bin/bash
gcc -fPIC -c -fPIC *.c 
gcc  -shared *.o  -o liball.so 
