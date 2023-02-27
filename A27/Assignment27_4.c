//Write a program which accept string form user and accept one character. Return index of last occurence of that character.
//ip   "Marvellous Multi OS"
//ip    M   e    w  
//op    11  4   -1

#include<stdio.h>
int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int itemp = -1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            itemp = iCnt;
        }
        iCnt++;
        *str++;
    }
    return itemp;
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

    iRet = LastChar(Arr, cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}
