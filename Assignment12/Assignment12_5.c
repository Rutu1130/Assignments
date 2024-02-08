
//Write a program which accept number from user and return the difference between summation of even 
// digits and summation of odd digits 
// Input : 2395                 1018        
// Output : -15 (2-17)           6  (8 -2)        

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo = iNo / 10;
    }

    return  iEvenSum - iOddSum;
   

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d", iRet);
    return 0;
}