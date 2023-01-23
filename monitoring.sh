#!/bin/bash
virtual_cpu=$(grep -w "processor" /proc/cpuinfo | wc -l)
memoryu=$
echo "	#Architecture: $(uname -a)
    	#CPU physical : $(nproc)
	#vCPU : $virtual_cpu 
	#Memory Usage:
	#Disk Usage:
	#CPU load:
	#last boot:
	#LVM use:
	#Connections TCP :
	#User log:
	#Network:
	#Sudo :"

