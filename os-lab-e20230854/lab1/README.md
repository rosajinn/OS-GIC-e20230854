
Lab1 Report

Lab 1 Report Student ID: e20230854

#Task1: Kernel and Distribution To identify the operating system information, I used the following commands: - uname -a - lsb_release -a The kernel version was obtained from the output of uname -a, while the Ubuntu distribution information was obtained from lsb_release -a. This task helped me understand the different between Linux kernel and the Ubuntu distribution. The kernel is the core part of the operating system that manages hardware resources, while Ubuntu is a Linux distribution that includes the kernel together with additional software tools.

#Task2: Files and Folders In this task, I practiced basic Linux file and directory commands such as: - pwd - ls - mkdir - cd - touch - echo - cat - cp - mv - rm I created files and directories, added content to files, renamed files, and removed files. This task improved my understanding of how Linux manages files and directories.

#Task3: Install, Remove and Purge Software The package mc (Midnight Commander) was installed using APT. The program was located at: /usr/bin/mc After installation, the configuration directory /etc/mc existed When I ran: sudo apt-get remove mc -y the /etc/mc directory still extisted.This shows that the remove command uninstalls the package but keep its configuration files. Whe I ran: sudo apt-get purge mc -y the /etc/mc directory no longer existed. This show that the purge command removes both the package and its configuration files. "C:\Users\U-ser\Pictures\Screenshots\Screenshot 2026-11-09 224554.png"

#Task4: Program and Process A program is a file stored on disk while a process is a running instance of a program in memory. Using the command: which sleep I located the sleep program in the system. When I executed: sleep 30 & the program became a running process and appeared in the output of the ps command.

After 30seconds the process terminated and disappeared from the process list. However, the program file remained on the system. This demonstrates the difference between a program and a process.
"C:\Users\U-ser\Pictures\Screenshots\Screenshot 2026-11-09 193037.png"

#Task5: Multitasking Serveral instances of the sleep program were executed simultaneously in the background. The process list showed multiple running sleep process at the same time. This demonstrated that OS can manage multiple process concurrently. "C:\Users\U-ser\Pictures\Screenshots\Screenshot 2026-11-09 192942.png"

#Task6: Virtualization Vurtualization informarion was collected using: system-detect-virt Additional information such as the kernel release and hostname was store in task6_virtualization_check.txt

This task help me understand how to detrmine whether an OS is running directly on hardware or inside a virtualized environment.
"C:\Users\U-ser\Pictures\Screenshots\Screenshot 2026-11-09 193157.png"

#Task1: Kernel and Distribution The operating system information was collected using the commands uname -a and lsb_realease -a. The Kernel version was identified from the output of uname -a. The Ubunthu distribution version was identified from the output of lsb_release -a. #Task3: Install, Remove and Purge Software For this task the package mc (Midnight Commander) was installed using APT. The program was located at: /usr/bin/mc After installation, the configuration directory /etc/mc existed After running: sudo apt-get purge mc -y the /etc/mc directory no longet existed. This show that the purge command removes both the program and its configuration files
