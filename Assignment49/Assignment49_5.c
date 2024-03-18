/*
Write a recursive program which Accept number from user and 
return its product  of digits

Input : 523

Output : 30
*/

#include<stdio.h>

int MulDigitsR(int iNo)
{
    int iDigit = 0 ;
    static int iMul = 1;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        MulDigitsR(iNo);
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MulDigitsR(iValue);
    printf("Product of digits : %d", iRet);
    return 0;
}