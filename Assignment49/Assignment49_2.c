/*
Write a recursive program which Accept number from user and 
return summation of digits

Input : 879

Output : 24
*/

#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit = 0 ;
    static int iSum = 0;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigitsR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);
    printf("Summation of digits : %d", iRet);
    return 0;
}