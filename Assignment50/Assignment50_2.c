/*
Write a recursive program which Accept number from user and 
return largest digit

Input : 879830

Output : 9
*/

#include<stdio.h>

int MaxR(int iNo)
{
    static int iMax = 0;
    int iCnt = 0;

    if (iNo != 0)
    {
        iCnt = iNo % 10;

        if (iCnt > iMax)
        {
            iMax = iCnt;
        }

        MaxR(iNo / 10);
    }

    return iMax;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MaxR(iValue);
    printf("Largest digit is : %d", iRet);
    return 0;
}