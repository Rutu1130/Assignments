// write a program which accept number from user and count frequency of 2 in it 

// Input : 2395
//Output : 1

// Input : 1018
//Output : 0

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit ==2)
        {
            iCnt++;

        }
        iNo = iNo / 10;

    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);
    printf("%d", iRet);
    return 0;

}