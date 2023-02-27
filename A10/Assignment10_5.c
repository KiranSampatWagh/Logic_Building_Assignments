//write program which accept area in square feet and convert it into square meter.
//(1 square feet = 0.0929 square meter)

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.00;

    dAns = ((int)iNo * 0.0929);

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.00;

    printf("Enter Square feet \n");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);

    printf("Area in Square meter is %lf\n",dRet);

    return 0;
}