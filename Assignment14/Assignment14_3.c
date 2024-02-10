// Accept N numbes from user and return difference betwwen  frequency of even numbers and odd numbers

// Input :   N:   6
//          Elements : 85   66  11   80  93  88  
//  Output  : 11 is present

// Input :   N:   6
//          Elements : 85   66  3   80  93  88  
//  Output  : 11 is absent

#include<stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]  == 11)
        {
            return TRUE;
        }
         
    }
    return FALSE;
}

int main()
{
    int iSize = 0;
    BOOL bRet = FALSE;
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

    bRet =  Check(p, iSize);
    printf("Result is: %d\n", bRet);

    if(bRet == TRUE)
    {
        printf("11 is Present \n");
    }
    else
    {
        printf("11 is Absent \n");
    }
    free(p);

    return 0;
}