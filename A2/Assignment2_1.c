//Accept one no form user and print that no of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt =0; iCnt<iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue =0;

    printf("Enter nummber");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


