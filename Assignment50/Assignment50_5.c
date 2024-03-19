/*
Write a recursive program which Accept number from user and 
return its reverse number

Input : 523

Output : 325
*/

#include<stdio.h>

int ReverseR(int iNo)
{
    static int iRev = 0;
    int iCnt = 0;

    if (iNo != 0)
    {
        iCnt = iNo % 10;
        iRev = iRev * 10 + iCnt;
        ReverseR(iNo / 10);
    }

    return iRev;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = ReverseR(iValue);
    printf("Reverse number is : %d", iRet);
    return 0;
}