//program which accept number form user and display its non Factors.

#include<stdio.h>

void DisplayNonFact(int iNo)
{
    int iCnt = 0;
    
    printf("Non Factors of %d are:\n",iNo);

    for( iCnt = 1; iCnt < iNo; iCnt++ )
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFact(iValue);

    return 0;
}