// Write a program which accept three numbers and print its multipication
#include<stdio.h>

int Multiply(int iNo1,int iNo2, int iNo3)
{
    int iresult = iNo1*iNo2 *iNo3 ;
    return iresult ;
}

int main()
{

    int iValue1 = 0, iValue2= 0, iValue3 = 0, iRet = 0;
    printf("Enter the three numbers ");
    scanf("%d %d %d", &iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1 , iValue2 , iValue3);
    printf("Multiplication of three numbers is: %d", iRet);
    return 0 ;
}