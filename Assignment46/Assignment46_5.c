/*
Write a program which accept matrix and swap the contents of consecutive rows

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:
    4   3   2   2
    3   2   5   9
    3   9   7   5
    8   4   1   9   

*/

#include <stdio.h>

void SwapRows(int Arr[][4], int iRow, int iCol)
{
    for (int i = 0; i < iRow - 1; i += 2)
    {
        for (int j = 0; j < iCol; j++)
        {
            // Swap elements of consecutive rows
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
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

    SwapRows(Arr, 4, 4);

    printf("\nMatrix after swapping consecutive rows:\n");
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
