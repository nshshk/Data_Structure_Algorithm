#!/bin/sh

SET=$(seq  -w 0 21)

for i in $SET
do
dot -Tjpg $i.dot -o $i.jpg
done

convert \
    -resize 70% \
    -delay 200 \
    -loop 0 $(ls -1 *.jpg | sort -V) \
    insertionsort.gif

