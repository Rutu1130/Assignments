
/*
write appliction which accept file name from user and creat that file.
Input : Demo.txt
Output : File created successfully

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd=0;

    printf("Enter the name of file:\n");
    scanf("%s",FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable to create  file\n",FileName);
    }    
    else
    {
        printf("File gets created succesfully  \n",FileName);
    }

    return 0;
}