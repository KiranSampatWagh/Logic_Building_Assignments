//write program which accept range form user and display all even numbers in between the range.

#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt  =0;
    
    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
    }
    else
    {
        printf(" Even Number Range is:");

        for(iCnt =iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
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

    RangeDisplayEven(iValue1 , iValue2);

    return 0;
}