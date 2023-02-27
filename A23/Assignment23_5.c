//Accept division of student from user and depends on the division display exam timing.
//There are 4 division in school as A,B,C,D. Exam of division A at 7AM, B at 8.30AM, 
//C at 9.20AM, and D at 10.30AM.(Application should be case insensitive).

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv >= 'a')&&(chDiv <= 'd'))
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A' :
        {
            printf("Exam at 7AM");
            break;
        }
        case 'B' :
        {
            printf("Exam at 8.30AM");
            break;
        }    
        case 'C' : 
        {
            printf("Exam at 9.20AM");
            break;
        }
        case 'D' : 
        {
            printf("Exam at 10.30AM");
            break;
        }
        default :
        {
            printf("Invalide Division");
        }
    }    
}

int main()
{
    char cValue = '\0';

    printf("Enter the division: \n");
    scanf("%c",&cValue);

   DisplaySchedule(cValue);

    return 0;
}