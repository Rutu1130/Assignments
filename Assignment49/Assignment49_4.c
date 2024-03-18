/*
Write a recursive program which Accept number from user and 
return its factorial

Input : 5

Output : 120
*/

#include<stdio.h>

int FactorialR(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        FactorialR(iNo);
    }
    return iFact;  
}

int main()
{
    int iValue = 0 ,iRet = 0 ;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);
    printf("Factorial of number : %d\n",iRet);
    return 0;
}