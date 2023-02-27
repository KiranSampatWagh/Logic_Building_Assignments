//Accept one no form user and print that no of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    while (iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue =0;

    printf("Enter nummber\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


