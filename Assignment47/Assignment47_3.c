/*
Write a program which accept matrix and reverse the contents of each column

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:
3       9       7       5
8       4       1       9
4       3       2       2
3       2       5       9 

*/
#include <stdio.h>

void ReverseColumns(int Arr[][4], int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0, k = iCol - 1; j < k; j++, k--)
        {
            int temp = Arr[j][i];
            Arr[j][i] = Arr[k][i];
            Arr[k][i] = temp;
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

    ReverseColumns(Arr, 4, 4);

    printf("\nMatrix after reversing each column:\n");
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
