/*
write appliction which accept file name from user and display size of file
contents on screen
Input : Demo.txt
Output : file size is 56 bytes

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};

    int fd = 0 , iRet = 0;
    int iSize = 0;

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }    
    else
    {
        printf("File gets opened succesfully\n",FileName,fd);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            iSize = iSize + iRet;
        }

        printf("File size is %d bytes in it\n",iSize);

        close(fd);
    }

    return 0;
}