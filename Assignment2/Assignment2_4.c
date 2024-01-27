// Aceept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt=0;
    for(iCnt = 0;iCnt <iFrequency; iCnt++ )
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount =0;

    printf("Enter the number");
    scanf("%d",iValue);

    printf("Enter the Frequency");
    scanf("%d",iCount);

    Display(iValue,iCount);
    return 0;
}