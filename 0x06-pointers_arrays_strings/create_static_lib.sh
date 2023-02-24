#!/bin/bash
gcc -c $(ls 4*.c)
ar rc liball.a $(ls 4*.o)
