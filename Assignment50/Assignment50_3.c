/*
Write a recursiv program which accept string from user and count 
white spaces

Input : HElloWOrlD
Output : 5
*/

#include<stdio.h>

int SmallR(char *str)
{
    static int iCnt = 0;
    if (*str == '\0') 
    {
        return iCnt;
    } 
    else 
    {
        if (*str >= 'a' && *str <= 'z') 
        {
            iCnt++;
        }
        return SmallR(str + 1);
    }

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :");
    gets(Arr);

    iRet = SmallR(Arr);
    printf("Number of small letters are : %d ",iRet);
    return 0;
}