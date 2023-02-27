//Write a program which accept string form user and accept one character. Return index of first occurence of that character.
//ip   "Marvellous Multi OS"
//ip    e    w
//op    4   -1

#include<stdio.h>
int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        
        iCnt++;
        *str++;
    }
    if(*str == '\0')
    {
        return-1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    char Arr[20];
    char cValue  = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}
