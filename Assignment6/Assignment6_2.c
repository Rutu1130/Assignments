// write a program which accept number from user and print numbers till  tha number 


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt <= iNo)
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
    printf("Enter the number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;








}