//Accept one no from user and print that no of even no on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    int i =0;

    if(iNo<=0)
    {
        return;
    }
    
    for(i=1; i<=iNo; i++ )
    {
        printf("%d\t",2*i);
    }
}

int main()
{
    int iValue =0;

    printf("Enter no \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

