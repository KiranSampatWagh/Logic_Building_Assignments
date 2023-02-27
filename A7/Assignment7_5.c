//write the program which accept number form user and print first 5 multiple of given number.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    printf("First 5 Multiples are:\t");

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",(iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}