// Accept N numbes from user and return the largest number.

// Input :   N:   6
//      
//          Elements : 85   66  3   66  93  88  
//  Output  : 93


#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    

    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p, iSize);
    printf("Largest number is %d", iRet);
    free(p);

    return 0;
}
