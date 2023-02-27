//Accept amount in US doller and return its corresponding value in indian currency.
//Consider 1$ as 70 rupees.

#include<stdio.h>
int DollerToINR(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    iAns = (iNo * 70);

    return iAns;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is :%d\n",iRet);

    return 0;
}