// Write a program which accept two number  and check whether numbers is greater or not 

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
   

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please enter the number");
    scanf("%d",&iValue);
    bRet= ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;

}