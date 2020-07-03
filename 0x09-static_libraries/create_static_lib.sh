#!/bin/bash
gcc -Wall -Werror -Wextra -pedante -c *c
ar -rc liball.a *o
ranlib liball.a
