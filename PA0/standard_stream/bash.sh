#! /bin/bash
echo Hello|./a.out > a.txt
echo Hello|./a.out > b.txt 2>&1

