/*
Write a recursive program which display below pattern

Input : 5

Output : A  B   C   D   E
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        char ch = 'A' + (5 - iNo);
        printf("%c\t", ch);
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