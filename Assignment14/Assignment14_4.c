// Accept N numbes from user and return frequency of 11 form it. 

// Input :   N:   6
//          Elements : 85   66  3   80  93  88
//  Output  : 0

// Input :   N:   6
//          Elements : 85   11  3   15   111  11
//  Output  : 2

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int iNo = 11;
    int iRet = 0;
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

    iRet = Frequency(p, iSize, iNo);
    printf("Frequency of %d is: %d\n", iNo, iRet);

    free(p);

    return 0;
}
