//Write a program which accept string form user and check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }

        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            break;
        }
        *str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}   

int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("Contains no Vowel");
    }

    return 0;
}