/*
Write a program which accept matrix and check whether the matrix isSparse matrix or not

Sparse matrix is a matrix with the majority of its elements equal to zero

Input: 

    1   0   3   0
    0   6   0   0
    0   0   1   0
    9   0   0   9
    

Output: True
*/

#include <stdio.h>

bool ChkSparse(int Arr[][4], int iRow, int iCol)
{
    int zeroCount = 0;

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }
    return (zeroCount > (iRow * iCol) / 2);
}

int main()
{
    int Arr[4][4] = {
        {1, 0, 3, 0},
        {0, 6, 0, 0},
        {0, 0, 1, 0},
        {9, 0, 0, 9}
    };

    if (ChkSparse(Arr, 4, 4))
    {
        printf("Output: True\n");
    }
    else
    {
        printf("Output: False\n");
    }

    return 0;
}
