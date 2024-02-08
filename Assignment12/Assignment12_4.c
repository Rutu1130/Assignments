//Write a program which accept number from user and return multiplication of all digits 
// Input : 2395         1018    9440
// Output : 270           8       144

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMul *= iDigit;

        iNo = iNo / 10;
    }
    
    return iMul;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("%d", iRet);
    return 0;
}