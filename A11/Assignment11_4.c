//write program which accept range form user and return addition of all even numbers in between the range.
//range should positive number only.

#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iSum = 0;
    int iCnt  =0;
    
    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
    }
    else
    {

        for(iCnt =iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                 iSum = iSum + iCnt;
            }
        }
    }
    return iSum;   

}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Number:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    printf(" Addition of Number between Range is: %d\n",iRet);

    return 0;
}