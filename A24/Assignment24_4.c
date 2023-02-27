//Accept character form user and check whether it is special symbol or not
//(!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if((ch >='!')&&(ch <='*'))
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
    char cValue = 0;
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}