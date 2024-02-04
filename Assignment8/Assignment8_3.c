// Write a program to find even factorial of given number
//Input : 5
// Output :8

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<=0)
    {
        return 1;
    }
    if(iNo % 2 == 0)
    {
        return iNo * EvenFactorial(iNo -1);
    }
    else
    {
        return EvenFactorial(iNo-1);
    }
   

}

int main()
{
    int iValue = 0, iRet =0;
    printf("Enter the number");
    scanf("%d",&iValue);
    
    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is %d", iRet);
    return 0;
}