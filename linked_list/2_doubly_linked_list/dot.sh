#!/bin/sh

SET=$(seq  -w 0 30)

for i in $SET
do
dot -Tjpg $i.dot -o $i.jpg
done

convert \
    -resize "987x133!" \
    -delay 200 \
    -loop 0 $(ls -1 *.jpg | sort -V) \
    doubly_linked_list.gif

