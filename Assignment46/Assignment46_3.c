/*
Write a program which accept matrix and return largest number from both the diagonals

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:  9
*/

#include<stdio.h>
int MaxDiagonal(int Arr[][4], int iRow, int iCol)
{
    int maxMainDiagonal = Arr[0][0];
    int maxSecondaryDiagonal = Arr[0][iCol - 1];

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            if (i == j && Arr[i][j] > maxMainDiagonal)
            {
                maxMainDiagonal = Arr[i][j];
            }
            if ((i + j) == (iCol - 1) && Arr[i][j] > maxSecondaryDiagonal)
            {
                maxSecondaryDiagonal = Arr[i][j];
            }
        }
    }

    return (maxMainDiagonal > maxSecondaryDiagonal) ? maxMainDiagonal : maxSecondaryDiagonal;

}
int main()
{
    int Arr[4][4] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 9},
        {3, 9, 7, 5}
    };
    
    int iRet = MaxDiagonal(Arr, 4, 4);

    printf("Largest number from both diagonals: %d\n",iRet);

    return 0;
}
