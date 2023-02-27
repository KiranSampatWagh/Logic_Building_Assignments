//Write program which accept  one number form user and check whether that number is greter than 100 or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    bool bAns = false;

    if(bAns = iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet =ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}