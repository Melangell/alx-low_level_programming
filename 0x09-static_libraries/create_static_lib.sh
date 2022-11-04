#!/bin/bash
gcc -c -Wall -Wextra -Werror -Wno-unused -r -pedantic *.c
ar -rcs liball.a *.o

