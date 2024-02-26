/*Write a program which display additionof digits of elements from singly linear linked list

Function prototype : 

int  SumDigit(PNODE Head);

Input Linkes list : |110|->|230|->|20|->|240|->|640|

Output :      2     5   2   6   10
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


int SumOfDigits(int num)
{
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

void SumDigit(PNODE Head)
{
    while (Head != NULL)
    {
        int sum = SumOfDigits(Head->data);
        printf("Sum of digits of %d: %d\n", Head->data, sum);

        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);

    printf("Original Linked List: ");
    Display(First);

    printf("\nSum of digits:\n");
    SumDigit(First);

    return 0;
}
