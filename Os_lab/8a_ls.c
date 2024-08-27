#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
DIR *dp;
struct dirent *dirp;
if(argc<2)
{
printf("\n You are not passing the directory\n");
exit(1);
}
if((dp=opendir(argv[1]))==NULL)
{
printf("\nCannot open it does't exist %s file!\n",argv[1]);
exit(1);
}
while((dirp=readdir(dp))!=NULL)
printf("%s\n",dirp->d_name);
closedir(dp);
}
/*Save the above program as filename.c
Create a directory with any 2 or more files
Compile the .c (above program) file and then execute the file by passing the folder as the 2nd
argument.
Gcc filename.c
Chmod 777 filename.c
./a.out foldername*/
// cslab2@cslab2-VirtualBox:~$ mkdir SW

// cslab2@cslab2-VirtualBox:~$ cd SW

// cslab2@cslab2-VirtualBox:~/SW$ gedit -s pl.c

// cslab2@cslab2-VirtualBox:~/SW$ gedit -s p2.sh

// cslab2@cslab2-VirtualBox:~/SW$ ls

// p1.c p2.sh

// cslab2@cslab2-VirtualBox:~/SW$ cd

// cslab2@cslab2-VirtualBox:~$ gedits lab4.c

// cslab2@cslab2-VirtualBox:~$ gcc lab4.c

// cslab2@cslab2-VirtualBox:~$ chmod 777 lab4.c

// cslab2@cslab2-VirtualBox:~$ gcc lab4.c

// cslab2@cslab2-VirtualBox:~$ ./a.out SW

// p1.c

// p2.sh