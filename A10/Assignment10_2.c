//write program which accept width and height of rectangle from user and calculate its area.
//(Area = Width * Height)

#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    
    dArea = (float)fWidth * (float)fHeight;

    return dArea;
}

int main()
{
    float iValue1 = 0.0;
    float iValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width \n");
    scanf("%f",&iValue1);
    
    printf("Enter Height \n");
    scanf("%f",&iValue2);

    dRet = RectangleArea(iValue1, iValue2);

    printf("Area of rectangle is %lf\n",dRet);

    return 0;
}