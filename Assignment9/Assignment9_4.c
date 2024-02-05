// write a program which accept temperature in fahrenheit and  convert it into celsius
//(1 celsius = (fahrenheit -32) * (5/9))

// Input : 10
// Output : -12.2222   (10 -32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32)* 5.0/9.0;
}

int main()
{
   
    float fValue = 0.0;
    double bRet = 0.0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);

    bRet = FhtoCs(fValue);
    printf("temperature in celsius: %f",bRet);
    return 0;
}