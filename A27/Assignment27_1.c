//Write a program which accept string form user and accept one character. Check whether that character is present in string or not.
//ip   "Marvellous Multi OS"
//ip    e
//op    true

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool flag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            flag = true;
            break;
        }
        *str++;
    }
    return flag;
}

int main()
{
    char Arr[20];
    char cValue = 0;
    bool bRet = false;

    printf("enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;

}