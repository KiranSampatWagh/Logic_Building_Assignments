//// Write a program which accept number form user and return the count of odd digit.

#include<stdio.h>

int OddDigitCount(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;    
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = OddDigitCount(iValue);

    printf("%d\n",iRet);

    return 0;
}