//write a program which return second maximum elements form singly linear linked list.

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

int Maximum(PNODE Head)
{
    int iMax = (Head->Data);

    while(Head != NULL)
    {
        if(iMax < (Head->Data))
        {
            iMax = (Head->Data);
        }
        Head = Head->next;
    }
    return iMax; 
}

int SecMaximum(PNODE Head , int Max)
{
    int iSMax = (Head->Data);

    while(Head != NULL)
    {
        if(Head->Data != Max)
        {
            if(iSMax < (Head->Data))
            {
                iSMax = (Head->Data); 
            }
        }
        Head = Head->next;
    }
    return iSMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iSRet = 0;

    InsertLast(&First, 110);
    InsertLast(&First, 230);
    InsertLast(&First, 320);
    InsertLast(&First, 240);

    Display(First);

    iRet = Maximum(First);

    iSRet = SecMaximum(First, iRet);

    printf("Second maximum element is:%d\n",iSRet);

    return 0;
}