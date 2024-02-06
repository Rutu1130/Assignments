// Write a program which accept range from user and return addition of all numbers
// in between that range (Range should contains positive numbers only)
// Input :23 30
// Output : 212

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if (iStart <= 0 || iEnd <= 0)
    {
        printf("Invalid Range \n");
        return 0;
    }

    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet != 0) 
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}
