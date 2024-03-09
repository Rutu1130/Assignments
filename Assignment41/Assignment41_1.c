
/*
write appliction which accept file name from user and open that file in read mode
Input : Demo.txt
Output : File opened successfully

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file:\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open  file\n",FileName);
    }    
    else
    {
        printf(" File opened succesfully \n",FileName,fd);
        close(fd);
    }

    return 0;
}