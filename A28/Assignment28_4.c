//write a program which return largest element form all element of singly linear linked list.

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

void InsertFirst(PPNODE Head, int no)
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
        newn->next = *Head;
        *Head = newn;  
    }
}

int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while(Head != NULL)
    {
        if(iMax < Head->Data)
        {
            iMax = Head->Data;
        }
        Head = Head->next;
    } 
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    printf("largest element is %d\n", iRet);

    return 0;
}