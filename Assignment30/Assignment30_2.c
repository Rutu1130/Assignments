/*Write a program which displays all elements which are prime from singly linear linked list
Function prototype : 

int DisplayPerfect(PNODE Head);

Input Linkes list : |11|->|20|->|17|->|41|->|22|->|89|

Output :      11    17  41  89
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}


int IsPrime(int num)
{
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

void DisplayPrime(PNODE Head)
{
    printf("Prime numbers: ");
    while (Head != NULL)
    {
        if (IsPrime(Head->data))
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
}


void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head->next;
    }
   
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 22);
    InsertFirst(&First, 89);

    printf("Original Linked List: ");
    Display(First);

    DisplayPrime(First);

    return 0;
}
