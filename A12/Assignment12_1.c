// Write a program which accept number form user and display its digits in reverse order.

#include<stdio.h>

void DisplayDigitReverce(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10; 
    } 

}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayDigitReverce(iValue);

    return 0;
}