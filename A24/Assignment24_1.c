//Write a program which display ASCII table.Table contain symbol,Decimal,Hexadecimal and 
//Octal representation of every member from 0 to 255.

#include<stdio.h>
void DisplayASCII()
{
    printf("|Sym\t|Dec\t|Hex\t|Oct\t|\n");

    int iCnt = 0;

    for(iCnt = 1; iCnt <= 255; iCnt++)
    {
        printf("|%c\t|%d\t|%x\t|%o\t|\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}