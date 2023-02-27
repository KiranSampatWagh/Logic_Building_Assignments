//Aaccept division of student form user and depends on the division display exam timing.
//There are 4 division in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM, and D at 10.30 AM.
//(Application should be case insensitive).

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv )
{ 
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}