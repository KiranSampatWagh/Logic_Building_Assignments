//write a program to find odd factorial of given number.

#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if( (iCnt % 2) != 0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is:%d\n",iRet);

    return 0;
}