/*
Write a program which accept matrix and reverse the contents of each row

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:
    9   5   2   3
    2   2   3   4
    9   1   4   8
    5   7   9   3   

*/
#include <stdio.h>

void ReverseRows(int Arr[][4], int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0, k = iCol - 1; j < k; j++, k--)
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i][k];
            Arr[i][k] = temp;
        }
    }
}

int main()
{
    int Arr[4][4] = {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };

    printf("Original Matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

    ReverseRows(Arr, 4, 4);

    printf("\nMatrix after reversing each row:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
