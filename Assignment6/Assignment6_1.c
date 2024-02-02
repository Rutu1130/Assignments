// write a program which accept number from user and print number of $ &  * on screen 
// Input : 3
// Output : $ * $ * $ *

// Input : 5
// Output : $ * $ * $ * $ * $ *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("$");

        }
        else
        {
            printf("*");
        }
        if (iCnt < iNo)
        {
            printf(" ");
        }
      
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
    printf("Enter the Value");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}