#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create static library from object files
ar rc liball.a *.o
