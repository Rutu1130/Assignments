/* Write a program which accept number from user and display its table
 Input: 2
Output : 2 4 6 8 10 12 14 16 18 20
*/

#include <stdio.h>

void Table(int iNo)
{
    int iCnt;
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        int table = iNo * iCnt;
        printf("%d ", table);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
