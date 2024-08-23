#!/bin/bash

# Define the file paths
baserom="baserom.gba"
fehrr="FEHRR.gba"
patch="FEHRR-$(date +'%Y%m%d.%H%M')-$(git rev-parse --short HEAD).ups"

# Check if the baserom file exists
if [ ! -f "$baserom" ]; then
    echo "Error: baserom.gba not found!"
    exit 1
fi

# Check if the FEHRR file exists
if [ ! -f "$fehrr" ]; then
    echo "Error: FEHRR.gba not found!"
    exit 2
fi

# Create the UPS patch
echo "Creating UPS patch..."
ups diff --base "$baserom" --modified "$fehrr" --output "$patch"

# Check if the patch was created successfully
if [ $? -eq 0 ]; then
    echo "UPS patch created successfully: $patch"
    exit 0
else
    echo "Error: Failed to create UPS patch!"
    exit 3
fi
