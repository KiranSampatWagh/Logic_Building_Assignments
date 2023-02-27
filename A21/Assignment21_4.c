// Accept numbers of row and number of columns form user and display below pattern.

#include<stdio.h>

void Display(int iRow , int iCol)  
{
    int i = 0;
    int j = 0;
    int no = 1;
    int n = 0;

    for(i = 1; i <= iRow; i++)      
    {
        
        no = 1;
        n = -1;
        for(j = 1; j <= iCol; j++) 
        {
            if(i % 2 == 0)
            {
                printf("%d\t",n);
                n--;
            }
            else
            {
                printf(" %d\t",no);
                no++;
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