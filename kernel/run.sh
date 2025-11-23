#!/bin/sh

if [ -z "$1" ]; then
  echo "usage: run.sh [pocketgo|trimui|fc3000]"
  exit
fi

sed -i -e 's/CONFIG_CMDLINE=.*/CONFIG_CMDLINE="rootwait\ root=\/dev\/mmcblk0p1\ ro\ fstype=vfat\ init=\/mininit\ --\ '$1'"/g' .config
ARCH=arm CROSS_COMPILE=arm-linux- make zImage modules dtbs -j4
echo "task done !"
