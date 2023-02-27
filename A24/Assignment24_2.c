//Accept character form user. if char is small display its corresponding capital char,
//and it is captil then display corresponding small char. Other cases display as it is.

#include<stdio.h>
void Display(char ch)
{
    if((ch >='a')&&(ch <='z'))
    {
        ch = ch - 32;
    }
    else if((ch >='A')&&(ch <='Z'))
    {
        ch = ch + 32;
    }
    else
    {
        ch = ch;
    }
    printf("%c\n",ch);
    
}

int main()
{
    char cValue = 0;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}