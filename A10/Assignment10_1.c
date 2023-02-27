//write program which accept radius of circle from user and calculate its area.
//Considar value of PI as 3.14(Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    double PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float iValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius \n");
    scanf("%f",&iValue);

    dRet = CircleArea(iValue);

    printf("Area of circle is %lf\n",dRet);

    return 0;
}