/*
Write a recursive program which displays below pattern
Input : 5   
Output: 1   2   3   4   5   
*/

#include <stdio.h>
void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
