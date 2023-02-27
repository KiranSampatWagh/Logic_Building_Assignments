//write a program which return difference between even factorial and odd factorial of given number.

#include<stdio.h>
int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if( (iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }
    return (iEven - iOdd);
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);

    printf("Difference of even and odd Factorial is:%d\n",iRet);

    return 0;
}