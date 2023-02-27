//Aaccept Character form user and check whether it is small case or not(a-z).

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ChkSmall(char ch )
{ 
    if((ch >='a')&&(ch <= 'z'))
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

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not Small case character");
    }

    return 0;
}