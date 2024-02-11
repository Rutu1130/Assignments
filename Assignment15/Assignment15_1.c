// Accept N numbes from user and accept one anothe numberas NO check whether NO is present or not

// Input :   N:   6
//          NO:  66
//          Elements : 85   66  11   80  93  88  
//  Output  : TRUE

// Input :   N:   6
//          NO :12
//          Elements : 85   66  3   80  93  88  
//  Output  : FALSE

#include<stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]  == iNo)
        {
            return TRUE;
        }
         
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iValue =0;
    BOOL bRet = FALSE;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the number : \n");
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

    bRet =  Check(p, iSize, iValue);
   

    if(bRet == TRUE)
    {
        printf("Number is Present \n");
    }
    else
    {
        printf("Number is Absent \n");
    }
    free(p);

    return 0;
}