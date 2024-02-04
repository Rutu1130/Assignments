//Write a program to find out odd Factorial of given number
// Input:5
//Output:15   (5*3*1)

#include<stdio.h>

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
int main()
{
    int iValue = 0, iRet =0;
    printf("Enter the number");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    printf("Odd factorial of number is %d", iRet);
    return 0;
}