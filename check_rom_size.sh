#!/bin/bash

if [ ! -f "FEHRR.gba" ]; then
  echo "Info: FEHRR.gba not found, trying to build it"
  make
fi

if [ ! -f "FEHRR.gba" ]; then
  echo "Error: failed to build FEHRR.gba"
  exit 1
fi

# Get the file size in bytes
filesize=$(stat -c%s "FEHRR.gba") # GNU stat
if [ -z "$filesize" ]; then
  filesize=$(stat -f%z "FEHRR.gba") # BSD stat
fi

# Fail to get the file size
if [ -z "$filesize" ]; then
  echo "Error: failed to get the file size"
  exit 2
fi

# Define the maximum allowed size (32MB)
max_size=$((32 * 1024 * 1024))

# Calculate the ratio of the file size to the maximum allowed size
ratio=$(echo "scale=2; 100 * $filesize / $max_size" | bc)

echo "Info: current size is $filesize bytes, ratio is $ratio%"

# Check if the file size exceeds the maximum allowed size
if [ "$filesize" -gt "$max_size" ]; then
  echo "Error: FEHRR.gba exceeds 32MB"
  exit 3
fi

echo "FEHRR.gba is within the allowed size"
exit 0
