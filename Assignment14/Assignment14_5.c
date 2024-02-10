// Accept N numbes from user and return frequency of 11 form it. 

// Input :   N:   6
//           NO : 66
//          Elements : 85   66  3   66  93  88
//  Output  : 2

// Input :   N:   6
//          NO : 12
//          Elements : 85   11  3   15   111  11
//  Output  : 0


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0, iRet = 0, iValue = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the number to find its frequency: \n");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);
    printf("Frequency of %d is: %d\n", iValue, iRet);

    free(p);

    return 0;
}
