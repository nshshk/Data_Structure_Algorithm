#!/bin/sh

SET=$(seq  -w 0 19)

for i in $SET
do
dot -Tjpg $i.dot -o $i.jpg
done

convert \
    -resize "565x416!" \
    -delay 200 \
    -loop 0 $(ls -1 *.jpg | sort -V) \
    tree.gif

