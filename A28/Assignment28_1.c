//write a program which serch first occerence of particular element form singly linear linked list .
//Function should return position at which elelment is found.

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

int SerchFirstOcc(PNODE Head, int no)
{
    int iCnt = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            break;
        }
        iCnt++;
        Head = Head->next;
    } 
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iValue = 0;

    printf("Enter value\n");
    scanf("%d", &iValue);

    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = SerchFirstOcc(First, iValue);

    printf("position of element is %d\n", iRet);

    return 0;
}