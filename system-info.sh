#!/bin/bash


#HOSTNAME
printf "Hostname:\t\t\t%s\n" $(hostname)  > file
#------------


#IP
printf "\n" >> file
printf "IP:%s\t\t\t\t" >> file
ip route get 8.8.8.8 | awk '{print $NF; exit}' >> file
#------------


#SERVER NAME
printf "\n" >> file
printf "ServerName:\t\t\t%s" >> file
servername=$(cat /etc/apache2/sites-enabled/000-default.conf | grep -v '#' | grep "ServerName" | awk '{$1=""; print $0}')
printf "%s\n" $servername >> file
#------------


#SERVER ALIAS
printf "\n" >> file
printf "ServerAlias:\t\t\t%s" >> file
serveralias=$(cat /etc/apache2/sites-enabled/000-default.conf | grep -v '#' | grep "ServerAlias" | awk '{$1=""; print $0}')
for word in $serveralias; do
		printf "%s\n\t\t\t\t" $word >> file
done
#------------


#MEMORY
printf "\n" >> file
printf "Memory:\t\t\t\t" >> file
free -m | grep "Mem:" | awk '{total=$2; used=$3; free=$4; print "\nTotal\t\t\t\t" total "\nUsed\t\t\t\t" used "\nFree\t\t\t\t" free}' >> file
free -m | grep "Swap:" | awk '{swap=$2; print "Swap\t\t\t\t" swap}' >> file
#------------


#OS VERSION
printf "\n" >> file
printf "OS Version:\t\t\t" >> file
echo $(uname -a) >> file
#------------

#LISTENING PORTS
printf "\n" >> file
printf "Listening ports:\n" >> file
sudo netstat -plnt | grep "tcp" | awk '{name=$7; port=$4; printf name "\t\t\t" port "\n"}' >> file

#-----------

#DISK USAGE ON ROOT
printf "\n" >> file
sudo du -sh / netcdf 2>&- | awk '{total=$1; printf "Disk usage on root:\t\t" total "\n"}' >> file


#SERVICE STATUS
printf "\n" >> file
printf "Service Status:\n" >> file
initctl list | awk '{SRV=$1; STS=$2; printf SRV "\t\t" STS "\n"}' >> file2
column -t file2 >> file
rm -f file2

