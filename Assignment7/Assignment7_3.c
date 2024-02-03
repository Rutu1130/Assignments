/* Write a program to find a factorial of given number

Input : 5
 Output :120   (5*4*3*2*1)
*/



#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    return iNo * Factorial(iNo -1);

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);
    return 0;
}