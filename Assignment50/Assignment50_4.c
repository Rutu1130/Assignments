/*
Write a recursive program which Accept number from user and 
return smallest digit

Input : 879831

Output : 1
*/

#include<stdio.h>

int MinR(int iNo)
{
    static int iMin = 9;
    int iCnt = 0;

    if (iNo != 0)
    {
        iCnt = iNo % 10;

        if (iCnt < iMin)
        {
            iMin = iCnt;
        }

        MinR(iNo / 10);
    }

    return iMin;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MinR(iValue);
    printf("samllest digit is : %d", iRet);
    return 0;
}