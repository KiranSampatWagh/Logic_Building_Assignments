//write a program which display Addition of element form singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data; 
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    } 
    else
    {
        PNODE temp = *Head;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        (temp)->next = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->next;
    }
    printf("\n");
}

void SumDigit(PNODE Head)
{
    while(Head != NULL)
    {   
        int iSum = 0;
        int digit = 0;
        while(Head->Data != 0)
        {
            digit = Head->Data % 10;
            iSum = iSum + digit;
            Head->Data = Head->Data / 10;
        }
        printf("%d\t",iSum);
        Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertLast(&First, 110);
    InsertLast(&First, 230);
    InsertLast(&First, 20);
    InsertLast(&First, 240);
    InsertLast(&First, 640);

    Display(First);

    SumDigit(First);

    return 0;
}