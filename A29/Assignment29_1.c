//write a program which display all elements which are perfect form singly linear linked list.

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

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->next;
    }
    printf("\n");
}

void DisplayPerfect(PNODE Head)
{
    int i = 0;

    printf("Perfect number is\n");

    while(Head != NULL)
    {
        int iSum = 0; 
        for(i = 1; i <= ((Head->Data)/2); i++)
        {
            if((Head->Data) % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == Head->Data)
        {
            printf("%d\t",iSum);
        }
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

    Display(First);

    DisplayPerfect(First);

    return 0;
}