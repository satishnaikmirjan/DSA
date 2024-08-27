// Simulation of "grep" command
#include<stdio.h>
#include<string.h>
void main()
{
char fn[10],pat[10],temp[200];
FILE *fp;
printf("Enter file name\n");
scanf("%s",fn);
printf("Enter pattern to be searched\n");
scanf("%s",pat);
fp=fopen(fn,"r");
while(!feof(fp))
{


fgets(temp,100,fp);
if(strstr(temp,pat))
printf("%s",temp);
}
fclose(fp);
}

Save the above program as filename.c
Create a directory with any 2 or more files
Compile the .c (above program) file and then execute the file by passing the folder as the 2nd
argument.
Gcc filename.c
Chmod 777 filename.c
./a.out foldernam