//write a program which return addition of all even elements form singly linear linked list.

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

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if((Head->Data) % 2 == 0 )
        {
            iSum = iSum + (Head->Data);
        }
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 20);
    InsertLast(&First, 32);
    InsertLast(&First, 41);

    Display(First);

    iRet = AdditionEven(First);

    printf("Addition of even element is:%d\n",iRet);

    return 0;
}