// write a program which accepts a number from user and print  factors of that number 

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iNo % iCnt ) == 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}