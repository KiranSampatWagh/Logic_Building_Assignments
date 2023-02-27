//write program which accept range form user and display all numbers in between the range.

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt  =0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("number range is: \n");

        for(iCnt =iNo1; iCnt <= iNo2; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Number:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);

    return 0;
}