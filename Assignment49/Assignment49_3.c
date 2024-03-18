/*
Write a recursive program which accept string from user and  count number
of characters

Input : Hello
Output : 5
*/

#include<stdio.h>
int StrlenR(char *str)
{

    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenR(str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = StrlenR(arr);
    printf("Length of string is : %d\n",iRet);
    return 0;
}