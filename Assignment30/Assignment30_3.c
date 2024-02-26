/*Write a program which returns addition of all even elements from singly linear linked list
Function prototype : 

int AdditionEven(PNODE Head);

Input Linkes list : |11|->|20|->|32|->|41|

Output :      52
*/

#include <stdio.h>
#include <stdlib.h>


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

int AdditionEven(PNODE Head)
{
    int sum = 0;

    while (Head != NULL)
    {
        if (Head->data % 2 == 0)
        {
            sum += Head->data;
        }
        Head = Head->next;
    }

    return sum;
}


void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

  
    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
     InsertFirst(&First, 41);

    printf("Original Linked List: ");
    Display(First);

    int result = AdditionEven(First);
    printf("Addition of even elements: %d\n", result);

    return 0;
}
