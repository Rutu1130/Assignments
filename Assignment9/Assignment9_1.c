//Write a program which accept radius of circle from user and calculate its area
// conside value of PI as 3.14 (Area = PI * Radius* Radius)
// Input = 5.3
//Output = 88.2026

#include<stdio.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    return PI * fRadius* fRadius;


}

int main()
{
    float fValue = 0.0;
    double bRet = 0.0;

    printf("Enter the radius");
    scanf("%f",&fValue);

    bRet = CircleArea(fValue);
    printf("Area is %2f ",bRet);
    return 0;
}