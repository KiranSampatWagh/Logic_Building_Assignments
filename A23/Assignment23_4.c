//Accept character form user and check whether it is small or not(a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
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
        printf("It is small character");
    }
    else
    {
        printf("It is not a small character");
    }
    return 0;
}