#!/bin/bash

rm ../../../../Desktop/Mechanical_Symphony/scrap/tests/test.js
gcc get_next_line.c get_next_line.h main.c libft/libft.a
./a.out ../../../../Downloads/rockyou.txt >> ../../../../Desktop/Mechanical_Symphony/scrap/tests/test.js
