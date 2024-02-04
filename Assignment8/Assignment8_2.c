// Accept amount in US dollar and return its corresponding value in indian currency
//Consider 1$ as 70 rupees
// Input: 10
// Output:700

#include<stdio.h>

int DollarToINR(int iNo)
{
    int Rupees = 70;
    return iNo * Rupees;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d", iRet);

    return 0;
}