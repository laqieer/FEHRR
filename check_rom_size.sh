#!/bin/bash

# Get the file size in bytes
filesize=$(stat -c%s "FEHRR.gba")

# Define the maximum allowed size (32MB)
max_size=$((32 * 1024 * 1024))

# Calculate the ratio of the file size to the maximum allowed size
ratio=$(echo "scale=2; 100 * $filesize / $max_size" | bc)

echo "Info: current size is $filesize bytes, ratio is $ratio%"

# Check if the file size exceeds the maximum allowed size
if [ "$filesize" -gt "$max_size" ]; then
  echo "Error: FEHRR.gba exceeds 32MB"
  exit 1
fi

echo "FEHRR.gba is within the allowed size"
exit 0
