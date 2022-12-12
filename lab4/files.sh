#!/bin/bash
touch ~/a.txt ~/b.txt
find ~ -maxdepth 1 -name *.txt | wc -l
