//write a program which display smallest digit of all element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node * next;
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
        (*Head) = newn; 
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int SmallDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
    
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

void DisplaySmall(PNODE Head)
{
    int iRet = 0;

    while(Head != NULL)
    {
        iRet = SmallDigit(Head->Data);

        printf("|%d|->",iRet);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
    
    Display(First);

    DisplaySmall(First);

    return 0;
}

