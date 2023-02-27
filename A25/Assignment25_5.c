//Write a program which accept string form user and display string in reverse order.
//"MarvellouS"

#include<stdio.h>

void Reverse(char *str)
{
    char Temp = '\0';
    char *Start = str;
    char *End = str;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp; 
         
        Start++;
        End--;

    }
    
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    printf("Reverse String is: %s\n",arr);

    return 0;
}