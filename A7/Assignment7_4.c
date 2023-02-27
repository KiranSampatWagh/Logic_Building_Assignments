//write the program which accept number form user and print all odd numbers up to this number.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    printf("Odd numbers are:\t");

    for(iCnt = 1; iCnt <= iNo; iCnt = (iCnt + 2))
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}