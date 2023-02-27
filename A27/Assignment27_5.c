//Write a program which accept string form user and reverse the string in place.
//ip   "abcd"
//op   "dcba"

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
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf("Reverse string is %s\n", Arr);

    return 0;
}
