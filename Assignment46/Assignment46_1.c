/*
Write a program which accept matrix from user and return  addition of digonal elements

Input: 

    3   2   5   9
    4   3   2   2
    8   4   1   5   
    3   9   7   5

Output:  12
*/

#include<stdio.h>
int AddDiagonal(int Arr[][4], int iRow, int iCol)
{
    int sum = 0;
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            
            if (i == j)
            {
                sum += Arr[i][j];
            }
        }
    }
    return sum;

}
int main()
{
    int Arr[4][4] = 
    {
        {3, 2, 5, 9},
        {4, 3, 2, 2},
        {8, 4, 1, 5},
        {3, 9, 7, 5}
    };

    int result = AddDiagonal(Arr, 4, 4);

    printf("Sum of diagonal elements: %d\n", result);

    return 0;
}
