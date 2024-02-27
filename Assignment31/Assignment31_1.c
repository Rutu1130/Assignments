/*Write a program which reverse each elementof singly linked list
Function prototype : 
void reverse(PNODE Head);

Input Linkes list : |11|->|28|->|17|->|41|->|6|->|89|

Output : |11|->|82|->|71|->|14|->|6|->|98|
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

int ReverseNumber(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}


void Reverse(PNODE Head)
{
    while (Head != NULL)
    {
        Head->data = ReverseNumber(Head->data);
        Head = Head->next;
    }
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

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    printf("Original Linked List: ");
    Display(First);

  
    Reverse(First);

    printf("Linked List after reversing each element: ");
    Display(First);

    return 0;
}
