//Write a program which accept string form user convert it info lower case.
//"Marvellous Multi OS"

#include<stdio.h>
void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        *str++;
    }   
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified String is %s\n", Arr);

    return 0; 
}