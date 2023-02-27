//write a program which display all elements which are prime form singly linear linked list.

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

void DisplayPrime(PNODE Head)
{
    int i = 0;

    printf("prime number is\n");

    while(Head != NULL)
    {
        int j = 0;
        for(i = 2; i <= ((Head->Data)/2); i++)
        {
            if((Head->Data) % i == 0)
            {
                j++;
            }
        }
        if(j == 0 )
        {
            printf("%d\t",(Head->Data));
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    InsertLast(&First, 11);
    InsertLast(&First, 20);
    InsertLast(&First, 17);
    InsertLast(&First, 41);
    InsertLast(&First, 22);
    InsertLast(&First, 89);

    Display(First);

    DisplayPrime(First);

    return 0;
}