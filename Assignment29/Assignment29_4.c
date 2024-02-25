/*Write a program which which return largest elements from singly linked list
Function prototype :
int Maximum(PNODE Head);

Input Linkes list : |110|->|230|->|320|->|240|

Output :    320
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

int Maximum(PNODE Head)
{
    int max = Head->data;

    while (Head != NULL)
    {
        if (Head->data > max)
        {
            max = Head->data;
        }
        Head = Head->next;
    }

    return max;
}

int main()
{
    PNODE First = NULL;

 
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Original Linked List: ");
    Display(First);

    int max = Maximum(First);

    printf("\nMaximum element in the linked list: %d\n", max);

    return 0;
}
