#!/bin/sh

if [ -z "$1" ]; then
  echo "usage: run.sh /dev/sdX [pocketgo|trimui|fc3000]"
  exit
fi

if [ -z "$2" ]; then
  echo "usage: run.sh /dev/sdX [pocketgo|trimui|fc3000]"
  exit
fi

./mkimage -C none -A arm -T script -d param.cmd param.scr &&
bin2header param.scr hex_boot > fs/hex_boot.h &&
bin2header ../kernel/arch/arm/boot/zImage hex_kernel > fs/hex_kernel.h &&
bin2header ../kernel/arch/arm/boot/dts/$2.dtb hex_dtb > fs/hex_dtb.h &&
ARCH=arm CROSS_COMPILE=arm-linux- make -j4 &&
sudo dd if=u-boot-sunxi-with-spl.bin of="$1" bs=1024 seek=8 conv=notrunc && 
sync
