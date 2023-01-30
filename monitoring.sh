#!/bin/bash
virtual_cpu=$(grep -w "processor" /proc/cpuinfo | wc -l)
memoryu=$(free --mega | awk '$1 == "Mem:" {printf("%d/%dMB (%.2f%%)", $3,$2, $3/$2*100)}')
disk_total=$(df -Bg | grep '^/dev/' | awk '{dt += $2} END {printf("%dGb"), dt}')
disk_used=$(df -Bm | grep '^/dev/' | awk '{du += $3} END {print du}')
disk_percent=$(df -Bm | grep '^/dev/' | awk '{dt += $2} {du += $3} END {printf("%d"), du/dt*100}')
cpu_load=$(top -bn1 | grep ^%Cpu | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1+$3}')
last_boot=$(who -b | awk '{print $3,$4}')
lvm_use=$(lsblk | grep lvm | awk '{if ($6) {print "yes";exit;} else {print "no";exit;} }')
tcp=$(netstat | grep '^tcp' | grep 'ESTABLISHED$' | wc -l)
mac=$(ip a | grep link/ether | awk '$1 == "link/ether" {print $2}')
sudo=$(cat /var/log/sudo/sudolog | grep COMMAND | wc -l)
echo "	#Architecture: $(uname -a)
    	#CPU physical : $(nproc)
	#vCPU : $virtual_cpu 
	#Memory Usage: $memoryu
	#Disk Usage: $disk_used/$disk_total ($disk_percent%)
	#CPU load: $cpu_load
	#last boot: $last_boot
	#LVM use: $lvm_use
	#Connections TCP : $tcp ESTABLISHED
	#User log: $(users | wc -w)
	#Network: IP $(hostname -I) ($mac)
	#Sudo : $sudo cmd"
