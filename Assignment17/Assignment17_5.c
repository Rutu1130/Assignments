// Accept number from user and display below pattern
//   Input  :   8
//   Output :  2    4   6   8   10  12  14  16 


#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iValue = 2;
    for (iCnt = 0; iCnt <iNo; iCnt++)
    {
        printf("%d", iValue);
        if(iCnt < iNo -1)
        {
            printf(" ");
            iValue +=2;
        }
       
    }
    printf("\n");

}


int main()
{
    int iValue = 0;
    printf("Enter the number of elements : \n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0 ;

}