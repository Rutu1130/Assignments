/*Write a program which display all palindrome elements of singly linked list
Function prototype : 
void DisplayPallindrome(PNODE Head);

Input Linkes list : |11|->|28|->|17|->|414|->|6|->|89|

Output : 11     6   414
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

int IsPalindrome(int num)
{
    return (num == ReverseNumber(num));
}

void DisplayPalindrome(PNODE Head)
{
    printf("Palindrome elements: ");
    while (Head != NULL)
    {
        if (IsPalindrome(Head->data))
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
    InsertFirst(&First, 414);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    printf("Original Linked List: ");
    Display(First);

    DisplayPalindrome(First);

    return 0;
}
