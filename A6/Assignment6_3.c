//Write program which accept two number form user and check whether that numbers is Equal or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    bool bAns = false;

    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    return bAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter two number\n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet =ChkEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}