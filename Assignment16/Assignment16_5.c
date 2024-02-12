// Accept N numbes from user and display summation of digits of each number

// Input :   N:   6
//      
//          Elements : 8225   665     3   76   953  858  
//  Output  : 17    17  3   13  17  21  


#include <stdio.h>
#include <stdlib.h>
int DigitSum(int iNo)
{
    int iSum = 0;
    while (iNo > 0)
    {
        iSum += iNo % 10;
        iNo /= 10;
    }
    return iSum;

}

void  DigitsSum(int Arr[], int iLength )
{
    int iCnt = 0;   
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = DigitSum(Arr[iCnt]);
        printf("%d ", iSum);
    }
    printf("\n");
}



int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the %d elements: \n", iSize);

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
