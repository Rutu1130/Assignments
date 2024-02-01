// Write a program which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>
float Percentage(int iNo1, int iNo2)
{
    return (float)(iNo2 *100)/iNo1;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("enter the total marks");
    scanf("%d",&iValue1);
    printf("enter the obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is%.2f%%", fRet);
    return 0;   

}