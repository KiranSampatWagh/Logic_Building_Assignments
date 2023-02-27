//Accept character form user and check whether it is digit or not(0-9).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= '0')&&(ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    bRet =ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;
}