// Accept N numbes from user and accept one another number as NO return index of first occurrence of that NO.

// Input :   N:   6
//          NO:  66
//          Elements : 85   66  11   80  93  88  
//  Output  : 1

// Input :   N:   6
//          NO :12
//          Elements : 85   11  3   80  11   111  
//  Output  : -1



#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1; 
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the number to find: \n");
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

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of numberis is %d at index %d :\n", iValue, iRet);
    }

    free(p);

    return 0;
}
