savedcmd_/home/devtool/ipu6/ipu6-drivers/ljca.mod := printf '%s\n'   drivers/mfd/ljca.o | awk '!x[$$0]++ { print("/home/devtool/ipu6/ipu6-drivers/"$$0) }' > /home/devtool/ipu6/ipu6-drivers/ljca.mod
