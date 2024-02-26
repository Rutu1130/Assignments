/*Write a program which displays all elements which are perfect from singly linear linked list
Function prototype : 
int Perfect(PNODE Head);

Input Linkes list : |11|->|28|->|17|->|41|->|6|->|89|

Output :        6   28
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

int IsPerfect(int num)
{
    int sum = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }
    return (sum == num);
}

void DisplayPerfect(PNODE Head)
{
    printf("Perfect numbers: \n");
    while (Head != NULL)
    {
        if (IsPerfect(Head->data))
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
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    printf("Original Linked List: ");
    Display(First);

    DisplayPerfect(First);

    return 0;
}
