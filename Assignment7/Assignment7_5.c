/* Write a program which accept number number from user and display its table in reverse order
 Input : 2
 Output : 20 18 16 14 12 10 8 6 4 2
*/
#include <stdio.h>

void Table(int iNo)
{
    int iCnt;
    for (iCnt = 10; iCnt >= 1; iCnt--)
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
