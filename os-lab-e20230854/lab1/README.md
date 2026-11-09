Lab 1 Report 
Student ID: e20230854

#Task1: Kernel and Distribution 
	The operating system information was collected using the commands uname -a and lsb_realease -a.
	The Kernel version was identified from the output of uname -a.
	The Ubunthu distribution version was identified from the output of lsb_release -a.
#Task3: Install, Remove and Purge Software 
	For this task the package mc (Midnight Commander) was installed using APT.
	The program was located at:
	/usr/bin/mc
	After installation, the configuration directory /etc/mc existed
	After running: 
	sudo apt-get purge mc -y
	the /etc/mc directory no longet existed. This show that the purge command removes both the program and its configuration files
	

