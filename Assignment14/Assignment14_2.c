// Accept N numbes from user and return difference betwwen  frequency of even numbers and odd numbers

// Input :   N:   7
//          Elements : 85   66  3   80  93  88  90
//  Output  : 1  (4-3)

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int EvenCount = 0;
    int OddCount = 0;
    

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
        
    }
    return   EvenCount  -  OddCount;
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

    iRet = Frequency(p, iSize);
    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}