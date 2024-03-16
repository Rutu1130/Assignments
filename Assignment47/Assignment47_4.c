/*
Write a program which accept matrix and check whether the matrix is identity matrix or not

Identity matrix is a square matrix with 1's along the diagonal from upper left to
lower right and 0's in all other positions

If it satisfies the structure as explained before then the matrix 
is called as identity matrix
Input: 

    1   0   0   0
    0   1   0   0
    0   0   1   0
    0   0   0   1
    

Output: True
*/
#include <stdio.h>

int ChkIdentity(int Arr[][4], int iRow, int iCol)
{
    if (iRow != iCol)
    {
        return 0; 
    }

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
           
            if ((i == j && Arr[i][j] != 1) || (i != j && Arr[i][j] != 0))
            {
                return 0; 
            }
        }
    }
    
    return 1; 
}

int main()
{
    int Arr[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    if (ChkIdentity(Arr, 4, 4))
    {
        printf("Output: True\n");
    }
    else
    {
        printf("Output: False\n");
    }

    return 0;
}
