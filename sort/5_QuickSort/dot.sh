#!/bin/sh

SET=$(seq  -w 0 36)

for i in $SET
do
dot -Tjpg $i.dot -o $i.jpg
done

convert \
    -resize "500x500!" \
    -delay 200 \
    -loop 0 $(ls -1 *.jpg | sort -V) \
    -coalesce -trim +repage -loop 0 -layers optimize \
    quicksort.gif

