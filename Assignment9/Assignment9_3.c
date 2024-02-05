// Write a program which accepts a distance in kilometre and covert it into meter
//( 1 kilometre = 1000 Metre)

// Input : 5
// Output : 5000

#include<stdio.h>
int KMtoMeter(int iNo)

{
    return iNo * 1000;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d", &iValue);
    iRet = KMtoMeter(iValue);
    printf("Distance is %d",iRet);
    return 0 ;
}