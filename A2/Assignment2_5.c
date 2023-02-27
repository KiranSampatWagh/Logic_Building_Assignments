//Accept two no form user and check whether no is even or odd.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEve(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet =FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet =CheckEve(iValue);
    if(bRet ==TRUE)
    {
        printf("EVEN No");
    }
    else
    {
        printf("ODD No");
    }

    return 0;
}
