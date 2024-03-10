/*
Write a program which accepts file name from user and count number of
capital characters from that file

Input : Demo.txt
Output : Number of Capital characters are 11
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int CountCapital(char FName[])
{
    int fd = 0;
    int iRet = 0;
    char Arr[BUFFERSIZE] = {'\0'};
    int i = 0;
    int iCount = 0; 

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FName);
        return -1;
    }
    else
    {
        printf("File gets opened succesfully \n",FName,fd);
        while ((iRet = read(fd, Arr, BUFFERSIZE)) != 0)
        {
            for (i = 0; i < iRet; i++)
            {
                if (Arr[i] >= 'A' && Arr[i] <= 'Z')
                {
                    iCount++;
                }
            }
        }
    }
    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter File name: \n");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    if (iRet != -1)
    {
        printf("Number of capital characters are %d\n", iRet);
    }

    return 0;
}
