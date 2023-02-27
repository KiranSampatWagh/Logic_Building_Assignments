//write program which accept temperature in fahrenheit and convert it into celsius.
//(1 celsius = (fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = (((float)fTemp - 32) * (5 / 9));

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temp in Fehrenheit \n");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);

    printf("Temprature in Celsius is %lf\n",dRet);

    return 0;
}