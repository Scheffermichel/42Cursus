#!/bin/bash
virtual_cpu=$(grep -w "processor" /proc/cpuinfo | wc -l)
memoryu=$(free --mega | awk '$1 == "Mem:" {printf("%d/%dMB (%.2f%%)", $3,$2, $3/$2*100)}')
disk_total=$(df -Bg | grep '^/dev/' | awk '{dt += $2} END {printf("%dGb"), dt}')
disk_used=$(df -Bm | grep '^/dev/' | awk '{du += $3} END {print du}')
disk_percent=$(df -Bm | grep '^/dev/' | awk '{dt += $2} {du += $3} END {printf("%d"), du/dt*100}')
cpu_load=$(top -bn1 | grep ^%Cpu | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1+$3}')

echo "	#Architecture: $(uname -a)
    	#CPU physical : $(nproc)
	#vCPU : $virtual_cpu 
	#Memory Usage: $memoryu
	#Disk Usage: $disk_used/$disk_total ($disk_percent%)
	#CPU load: $cpu_load
	#last boot:
	#LVM use:
	#Connections TCP :
	#User log:
	#Network:
	#Sudo :"
