//program which accept number form user and display its Factors in decreasing order.

#include<stdio.h>

void DisplayFact(int iNo)
{
    int iCnt = 0;
    
    printf("Factors of %d are:\n",iNo);

    for( iCnt = (iNo/2); iCnt >=1 ; iCnt-- )
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFact(iValue);

    return 0;
}