//Write a program which accept string form user and check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    bool Flag = false;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }

        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            Flag = true;
            break;
        }
        *str++;
    }
    return Flag;
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