#!/bin/bash

FOLDER="attachments"

# check exists folder:
[ ! -d "./$FOLDER" ] && mkdir "$FOLDER"

for i in {1..20}
do
  curl https://picsum.photos/800/400 -L > "./$FOLDER/$i.png"
  echo "$i image saving..."
done
