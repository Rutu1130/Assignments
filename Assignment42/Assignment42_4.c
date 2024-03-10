/*
Write a program which accepts file name and one character from user and 
count number of occurrences of that characters from that file

Input : Demo.txt            'M'
Output : Frequency of M is  11
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int CountCharacters(char FName[], char ch)
{
    int fd = 0;
    int iCount = 0;
    char buffer;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FName);
        return -1;
    }

    while (read(fd, &buffer, 1) != 0)
    {
        if (buffer == ch)
        {
            iCount++;
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char ch;

    printf("Enter File name: \n");
    scanf("%s", FileName);
    printf("Enter the character to count: \n");
    scanf(" %c", &ch);

    iRet = CountCharacters(FileName, ch);

    if (iRet != -1)
    {
        printf("Frequency of %c is %d\n", ch,iRet);
    }

    return 0;
}
