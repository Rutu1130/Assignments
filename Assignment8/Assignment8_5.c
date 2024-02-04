//Write a program which reurns difference between Even factorial and odd factorial of given number
// Input : 5
// Output: -7  (8-15)

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
int OddFactorial(int iNo)
{
     if(iNo<=0)
    {
        return 1;
    }
    if(iNo % 2 != 0)
    {
        return iNo * OddFactorial(iNo -1);
    }
    else
    {
        return OddFactorial(iNo-1);
    }
}

int FactorialDiff(int iNo)
{
    int EvenFact = EvenFactorial(iNo);
    int OddFact = OddFactorial(iNo);
    return  EvenFact - OddFact ;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Fcatorial difference is %d",iRet);
    return 0;

}
