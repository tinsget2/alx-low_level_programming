#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.h
ar -rc liball.a *.o
ranlib liball.a
