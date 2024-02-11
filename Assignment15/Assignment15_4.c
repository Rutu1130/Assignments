// Accept N numbes from user and accept one another number as NO return index of last occurrence of that NO.

// Input :   N:   6
//          Start:  60
//          End  :  90
//          Elements : 85   66  3   76  93  88  
//  Output  :85  66    76  88

// Input :   N:   6
//          Start:  30
//          End  :  50
//          Elements : 85   66  3   76  93   88  
//  Output  : 



#include <stdio.h>
#include <stdlib.h>

void  Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
   

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
     
}

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter the ending number: \n");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the %d elements: \n", iSize);

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (int i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}