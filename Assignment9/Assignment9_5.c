// write a program which accept area in square feet and convert it into square meter
// ( 1 square feet = 0.0929 square meter)
// Input : 5
// Output : 0.464515

#include<stdio.h>

double SquareMeter(int iNo)

{
    double conversionFactor = 0.0929;
    return  iNo * conversionFactor;

}

int main()
{
    int iValue = 0;
    double bRet = 0.0 ;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    bRet = SquareMeter(iValue);
    printf("Area in square meter is: %f",bRet);
    return 0;
}


