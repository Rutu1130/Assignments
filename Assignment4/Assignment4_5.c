/* write a program which accept number from user and return difference 
between summation of all its factors and non factors
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactorSum = 0;
    int iNonFactorSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1;iCnt<= iNo;iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iFactorSum += iCnt;
        }
        else
        {
            iNonFactorSum += iCnt;
        }
    }
    //Logic
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}