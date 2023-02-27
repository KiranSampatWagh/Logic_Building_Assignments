//write a program which accept no form user and display its factors in decreasing order

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt =0;
    
    printf("Factors are :");

    for(iCnt =(iNo/2); iCnt>0; iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);    
        }
    }
}

int main()
{
    int iValue =0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}