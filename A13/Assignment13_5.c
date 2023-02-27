//// Write a program which accept number form user and return the difference between summetion of even and odd digit.

#include<stdio.h>

int SumDiffDigit(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;    
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = SumDiffDigit(iValue);

    printf("%d\n",iRet);

    return 0;
}