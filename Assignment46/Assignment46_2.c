/*
Write a program which accept matrix from user and one number from user and
return frequency of that number

Input: 
Number : 9

    3   2   5   9
    4   3   2   2
    8   4   1   9   
    3   9   7   5

Output:  9
*/

#include<stdio.h>
int Frequency(int Arr[][4], int iRow, int iCol, int iNo)
{
    int frequency = 0;
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            
            if (Arr[i][j] == iNo)
            {
                frequency++;
            }
        }
    }
    return frequency;

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
    int iNo =0;
    printf("Enter  number : ");
    scanf("%d", &iNo);

    int iRet = Frequency(Arr, 4, 4,iNo);

    printf("Frequency of %d in the matrix: %d\n", iNo,iRet);

    return 0;
}
