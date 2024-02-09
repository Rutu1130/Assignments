// Accept N numbers from users and return difference betwwen summation of evev elements and summation of odd elements

// Input :   N:   6
//          Elements : 85   66  3   80  93  88
//  Outpput  : 53       (234 - 181)


#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int evenSum = 0;
    int oddSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            evenSum += Arr[iCnt];
        }
        else
        {
            oddSum += Arr[iCnt];
        }
    }
    return evenSum - oddSum;
}

int main()
{
    int iSize = 0, iRet = 0;
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

    iRet = Difference(p, iSize);
    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}
