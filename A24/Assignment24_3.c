//Accept character form user. if char is captil then display all the char form the input char till Z.
//if inpute char is small then print all char in reverse order till a. In other case return directly.

#include<stdio.h>

void Display(char ch)
{ 
    int i = 0;

    if((ch >='a')&&(ch <='z'))
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else if((ch >='A')&&(ch <='Z'))
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}