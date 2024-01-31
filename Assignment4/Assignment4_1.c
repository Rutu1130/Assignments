// Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFactor(int iNo)
{
    int iCnt =1;
    int iMul =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt= 1; iCnt <= (iNo/2); iCnt++)
    if ((iNo % iCnt)==0)
    {
        iMul= iMul* iCnt;
    }

    return iMul;

}

int main()
{

    int iValue = 0;
    int iRet =0;

    printf("Enter the number");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);

    printf("%d",iRet);

    return 0;

}