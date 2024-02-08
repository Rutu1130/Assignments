//Write a program which accept number from user and return the count of Odd digits 
// Input : 2395         1018    -1018
// Output : 3           2        2

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0) 
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("%d", iRet);
    return 0;
}