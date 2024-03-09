/*
write appliction which accept file name from user and read all data from that file and display 
contents on screen
Input : Demo.txt
Output : Display all data of file

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

    printf("Enter the name of file :\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to openfile\n",FileName);
    }    
    else
    {
        printf("File open succesfully and dispaly all data \n",FileName,fd);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            printf("%s",Arr);      
        }

        close(fd);
    }

    return 0;
}