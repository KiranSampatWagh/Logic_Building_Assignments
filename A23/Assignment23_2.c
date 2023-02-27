//Accept character form user and check whether it is captil or not(A-Z).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
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
        printf("It is captil character");
    }
    else
    {
        printf("It is not a captil character");
    }
    return 0;
}