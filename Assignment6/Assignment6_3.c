// write a program which accepts a number from user and pront its numbers line
// Input : 4 
// Output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d",iCnt);
        if (iCnt < iNo)
        {
            printf(" ");
        }
        
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter the number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;    
}