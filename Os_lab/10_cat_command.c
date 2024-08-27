
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
FILE *fp;
char ch;
if(argc<2)
{
printf("File not entered");
exit(1);
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("File does not exist\n");
exit(1);
}
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
fclose(fp);
printf("\n");
}



//simulate cat cmd (cat >> f1 f2)
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
FILE *fp1,*fp2;
char ch;
if(argc<3)
{
printf("insufficient no. of arguments\n");
exit(1);
}
fp1=fopen(argv[1],"a");
fp2=fopen(argv[2],"r");
if(fp2==NULL)
{
printf("Error in opening file\n");
exit(1);
}
while((ch=fgetc(fp2))!=EOF)
fprintf(fp1,"%c",ch);
fclose(fp1);
fclose(fp2);
}


cslab2@cslab2-VirtualBox:~/VS$ cc f1_f2.c

cslab2@cslab2-VirtualBox:~/VS$ ./a.out fl.c

insufficient no. of arguments

cslab2@cslab2-VirtualBox:~/VS$ ./a.out fl.c f2.c

cslab2@cslab2-VirtualBox:~/VS$ cat fl.c

#!/bin/bash

echo "Hello"

#!/bin/bash

echo "Bye"

A