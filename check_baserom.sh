#!/bin/bash

# Check if the baserom.gba file exists
if [ ! -f baserom.gba ]; then
    echo "baserom.gba not found!"
    exit 1
fi

# Define the expected SHA-1 value
expected_sha1="a57095da867de4d585c33d4394712986245fe6ca"

# Calculate the SHA-1 of the file (use shasum because sha1sum is not available on macOS)
actual_sha1=$(shasum baserom.gba | awk '{print $1}')

# Compare the calculated SHA-1 with the expected value
if [ "${actual_sha1}" = "${expected_sha1}" ]; then
    echo "SHA-1 matches!"
    exit 0
else
    echo "SHA-1 does not match!"
    exit 2
fi
