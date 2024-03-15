/*
Write a program which accept matrix and display addition of elements from each column

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:  18    18   15  25
*/

#include<stdio.h>

int AddColumn(int Arr[][4], int iRow, int iCol)
{
    for (int j = 0; j < iCol; j++)
    {
        int sum = 0;
        for (int i = 0; i < iRow; i++)
        {
            sum += Arr[i][j];
        }
        printf("%d\t", sum);
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

    printf("Addition of elements from each column:\n");
    AddColumn(Arr, 4, 4);

    return 0;
}
