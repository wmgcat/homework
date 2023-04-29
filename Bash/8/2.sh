#!/bin/bash

FOLDER="attachments"

for i in $(find $FOLDER -type f -name "*.png")
do
  rm $i
  echo "$i deleting..."
done
