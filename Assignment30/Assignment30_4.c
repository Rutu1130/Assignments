/*Write a program which returns second maximum elements from singly linear linked list
Function prototype : 

int SecMaximum(PNODE Head);

Input Linkes list : |110|->|230|->|320|->|240|

Output :      240
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

int SecMaximum(PNODE Head)
{
    int max = 0, secMax = 0;

    if (Head == NULL)
    {
        printf("Linked list is empty\n");
        return -1; 
    }

    max = Head->data;

    while (Head != NULL)
    {
        if (Head->data > max)
        {
            secMax = max;
            max = Head->data;
        }
        else if (Head->data > secMax && Head->data != max)
        {
            secMax = Head->data;
        }

        Head = Head->next;
    }

    return secMax;
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


    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    printf("Original Linked List: ");
    Display(First);

    int result = SecMaximum(First);
    if (result != -1)
    {
        printf("Second maximum element: %d\n", result);
    }

    return 0;
}
