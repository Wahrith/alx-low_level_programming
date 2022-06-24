#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a

© 2022 GitHub, Inc.
Terms
Privacy
Security

