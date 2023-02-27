
#include<stdio.h>

void Display(int iRow , int iCol)  
{
    int i = 0;
    int j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }

    if(iCol < 0)
    {
        iCol = -iCol;
    }
    
    for(i = 0; i <= iRow; i++)      
    {
        for(j = 1; j <= iCol; j++) 
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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