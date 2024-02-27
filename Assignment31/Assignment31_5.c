/*Write a program which display Largest digits of all elements from singly linked list
Function prototype : 

void DisplayLarge(PNODE Head);

Input Linkes list : |11|->|250|->|532|->|415|

Output :              1     5      5      9
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

int LargestDigit(int num)
{
    int largest = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit > largest)
            largest = digit;
        num /= 10;
    }
    return largest;
}


void DisplayLarge(PNODE Head)
{
    printf("Largest digits: ");
    while (Head != NULL)
    {
        printf("%d ", LargestDigit(Head->data));
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

    DisplayLarge(First);

    return 0;
}
