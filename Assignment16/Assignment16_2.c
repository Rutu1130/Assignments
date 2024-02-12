// Accept N numbes from user and return the Smallest number.

// Input :   N:   6
//      
//          Elements : 85   66  3   66  93  88  
//  Output  : 3


#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    

    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(p, iSize);
    printf("Smallest number is %d", iRet);
    free(p);

    return 0;
}
