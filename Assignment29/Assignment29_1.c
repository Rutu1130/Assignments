/*Write a program which search first occurrence of particular elementof singly linked list
Function should return postion at which element is found

Function prototype : 

int SearchFirstOcc(PNODE Head);

Input Linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element : 30
Output : 2
*/

#include <stdio.h>
#include <stdlib.h>

// Structure Declaration
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


int SearchFirstOcc(PNODE Head, int key)
{
    int position = 0;

    while (Head != NULL)
    {
        position++;

        if (Head->data == key)
        {
            return position;
        }

        Head = Head->next;
    }

    return -1; 
}

int main()
{
    PNODE First = NULL;

    
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 70);

    printf("Original Linked List: ");
    Display(First);

    int key;
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    int position = SearchFirstOcc(First, key);

    if (position != -1)
    {
        printf("First occurrence of %d is found at position: %d\n", key, position);
    }
    else
    {
        printf("%d not found in the linked list.\n", key);
    }

    return 0;
}
