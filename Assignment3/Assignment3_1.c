//write a program which accept one number from user and print that number of even numbers on screen


#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int EvenNum = 2;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf("%d\n",EvenNum);
        EvenNum += 2;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",iValue);

    printEven(iValue);
    return 0;
}