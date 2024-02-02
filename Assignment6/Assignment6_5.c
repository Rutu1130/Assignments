// Wrte a program which accept N and print first 5 multiples of N
// Input :4
// Output : 4 8 12 16 20


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= 5; iCnt++)
    {
        int multiple = iNo*iCnt;
        printf("%d",multiple);
        if (iCnt < iNo)
        {
            printf(" ");
        }     
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0 ;
}