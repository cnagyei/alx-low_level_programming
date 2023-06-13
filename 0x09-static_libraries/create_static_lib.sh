#!/bin/bash

# compile source code into object file ending with .o
gcc -c ./*.c

# archive the object files into a library
ar -rc liball.a ./*.o

# index the library
ranlib liball.a
