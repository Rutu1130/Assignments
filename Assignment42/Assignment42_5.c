/*
Write a program which accepts file name from user and one count user 
and read that number of characters from starting position

Input : Demo.txt        12
Output :Display first 12  characters from Demo.txt
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

void DisplayN( char FName[], int iSize)
{
    int fd = 0;
    char buffer;
    int iCount = 0;
    int count =0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FName);
        return;
    }

    while (iCount <  count && read(fd, &buffer, 1) != 0)
    {
        printf("%c", buffer);
        iCount++;
    }

    close(fd);

}

int main()
{
    char FileName[30];
    int count = 0;

    printf("Enter File name: \n");
    scanf("%s", FileName);

    printf("Enter the number of characters to display: \n");
    scanf("%d", &count);

    printf("Display first %d characters from %s:\n", count, FileName);
    DisplayN(FileName, count);

    return 0;
}