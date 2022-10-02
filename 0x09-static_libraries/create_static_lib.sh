#!/bin/bash
gcc -c $(ls *.c)
ar rc liball.a $(ls *.o)
