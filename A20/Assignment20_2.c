// Accept numbers of row and number of columns form user and display below pattern.

#include<stdio.h>

void Display(int iRow , int iCol)  
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    char Ch = '\0';
    
    for(i = 1; i <= iRow; i++)      
    {
        ch = 'a';
        Ch = 'A';
        for(j = 1; j <= iCol; j++) 
        {
            if(i % 2 != 0)
            {
                printf("%c\t",Ch);
                Ch++;
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }
        }  
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of row\n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}