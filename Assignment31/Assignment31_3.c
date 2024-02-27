/*Write a program which display product of all digits of all elements from singly linked list
Function prototype : 
void DisplayProduct(PNODE Head);

Input Linkes list : |11|->|20|->|32|->|41|

Output :              1     2    6      4
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

int ProductOfDigits(int num)
{
    int product = 1;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0) 
            product *= digit;
        num /= 10;
    }
    return product;
}

void DisplayProduct(PNODE Head)
{
    printf("Product of digits: ");
    while (Head != NULL)
    {
        printf("%d ", ProductOfDigits(Head->data));
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
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    printf("Original Linked List: ");
    Display(First);

    DisplayProduct(First);

    return 0;
}
