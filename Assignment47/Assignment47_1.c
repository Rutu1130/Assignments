/*
Write a program which accept matrix and display transpose of the matrix

The transpose of a given matrix is formed by interchanging
 the rows and columns of a matrix 

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:
    3   4   8   3
    2   3   4   9
    5   2   1   7
    9   2   5   5   

*/
#include <stdio.h>

void Transpose(int Arr[][4], int iRow, int iCol)
{
    int Transpose[iCol][iRow];

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            Transpose[j][i] = Arr[i][j];
        }
    }

    for (int i = 0; i < iCol; i++)
    {
        for (int j = 0; j < iRow; j++)
        {
            printf("%d\t", Transpose[i][j]);
        }
        printf("\n");
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

    printf("\nTranspose of the Matrix:\n");
    Transpose(Arr, 4, 4);

    return 0;
}
