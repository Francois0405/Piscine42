#!/bin/bash

git status --ignored -s > temp.txt
grep '^!!' temp.txt > filter.txt
cut -d ' ' -f 2 filter.txt
rm filter.txt temp.txt
