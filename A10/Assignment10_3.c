//write program which accept distance in kilometer and convert it into meter.
//(1 kilometer = 1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = (iNo * 1000);

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer \n");
    scanf("%d",&iValue);
    
    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n",iRet);

    return 0;
}