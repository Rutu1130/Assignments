/*
Write a recursive program which display below pattern

Input : 5

Output : 5  4   3   2   1
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;
}