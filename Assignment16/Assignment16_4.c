// Accept N numbes from user and display all such numbers which contains 3 digits in it

// Input :   N:   6
//      
//          Elements : 8225   665     3   76   953  858  
//  Output  : 665   953 858


#include <stdio.h>
#include <stdlib.h>

void  Digits(int Arr[], int iLength )
{
    int iCnt = 0;    

    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d ", Arr[iCnt]);
        }
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

    Digits(p, iSize);

    free(p);

    return 0;
}
