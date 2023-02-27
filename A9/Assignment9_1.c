//Writeprogram which accept number form user and display below pattern.

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",('*'));
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",('#'));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}