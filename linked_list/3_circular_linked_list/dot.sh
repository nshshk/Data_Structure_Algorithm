#!/bin/sh

SET=$(seq  -w 0 14)

for i in $SET
do
dot -Tjpg $i.dot -o $i.jpg
done

convert \
    -resize "693x133!" \
    -delay 200 \
    -loop 0 $(ls -1 *.jpg | sort -V) \
    circular_linked_list.gif

