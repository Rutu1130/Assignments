/*
Write a recursiv program which accept string from user and count 
white spaces

Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int WhtSpacesR(char *str)
{
    static int iCnt = 0;
    if (*str == '\0') 
    {
        return iCnt;
    } 
    else 
    {
        if (*str == ' ' || *str == '\t' || *str == '\n') 
        {
            iCnt++;
        }
        return  WhtSpacesR(str + 1);
    }

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :");
    gets(Arr);

    iRet = WhtSpacesR(Arr);
    printf("Number of whitespaces are : %d ",iRet);
    return 0;
}