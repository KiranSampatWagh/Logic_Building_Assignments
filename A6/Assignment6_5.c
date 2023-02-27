//Write program which accept total marks and obtained marks form user and calculate percentage.

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0;

    if(iNo1 == 0)
    {
        iNo1 = 1; 
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }

    fAns = ((float)iNo2 /(float) iNo1) * 100;

    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Enter total marks\n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks\n");
    scanf("%d", &iValue2);

    fRet =Percentage(iValue1, iValue2);

    printf("Percentage of marks are :%f\n",fRet);

    return 0;
}