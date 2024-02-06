// Write a program which accept range from user and display all number in between that range
// Input : 23  35
//Output :23 24 25 26 27 28 29 30 31 32 33 34 35

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if (iStart > iEnd)
    {
        printf("INvalid range");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
        {
            printf("%d",iCnt);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;

}