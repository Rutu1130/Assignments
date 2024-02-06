// write a program which accept range from user and display all numbers in between that range in reverse order
// Input : 23 35

#include<stdio.h>


void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd) {
        printf("Invalid range. The starting point should be less than or equal to the ending point.\n");
        return;
    }

    for (iCnt = iEnd; iCnt >= iStart; iCnt--) {
        printf("%d ", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
