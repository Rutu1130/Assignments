// Write a program which accepts N from user and print all odd numbers up to N
//Input :18
//Output : 1 3 5 7 9 11 13


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 1;
    for(iCnt= 1;iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 !=0)
        {
            printf("%d",iCnt);
        }
        if (iCnt < iNo)
        {
            printf(" ");
        }
        
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}