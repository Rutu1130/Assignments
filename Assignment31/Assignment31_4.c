/*Write a program which display smallest digits of all elements from singly linked list
Function prototype : 

void DisplaySmall(PNODE Head);

Input Linkes list : |11|->|250|->|532|->|415|

Output :              1     0      2      1
*/

#include<stdio.h>
#include<stdlib.h>

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

int SmallestDigit(int num)
{
    int smallest = 9;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit < smallest)
            smallest = digit;
        num /= 10;
    }
    return smallest;
}

void DisplaySmall(PNODE Head)
{
    printf("Smallest digits: ");
    while (Head != NULL)
    {
        printf("%d ", SmallestDigit(Head->data));
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
    InsertFirst(&First, 250);
    InsertFirst(&First, 532);
    InsertFirst(&First, 415);

    printf("Original Linked List: ");
    Display(First);

    DisplaySmall(First);

    return 0;
}
