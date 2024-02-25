/*Write a program which which return smallest elements from singly linked list
Function prototype :
int Minimum(PNODE Head);

Input Linkes list : |110|->|230|->|20|->|240|->|640|

Output :    20
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

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Minimum(PNODE Head)
{
    int min = Head->data;

    while (Head != NULL)
    {
        if (Head->data < min)
        {
            min = Head->data;
        }
        Head = Head->next;
    }

    return min;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Original Linked List: ");
    Display(First);

    int min = Minimum(First);

    printf("\nMinimum element in the linked list: %d\n", min);

    return 0;
}
