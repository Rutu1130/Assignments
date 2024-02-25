/*Write a program which return largest elements from singly linked list

Function prototype : 
int Addition(PNODE Head);

Input Linkes list : |11|->|20|->|30|->|40|

Output :       100
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

int Addition(PNODE Head)
{
    int sum = 0;

    while (Head != NULL)
    {
        sum += Head->data;
        Head = Head->next;
    }

    return sum;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Original Linked List: ");
    Display(First);

    int sum = Addition(First);

    printf("\nSum of all elements in the linked list: %d\n", sum);

    return 0;
}
