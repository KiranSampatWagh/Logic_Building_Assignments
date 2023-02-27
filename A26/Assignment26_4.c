//Write a program which accept string form user and display digit from string.
//"Marve89llous121"

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '1')&&(*str <= '9'))
        {
            printf("%c",*str);
        }
        *str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;
}