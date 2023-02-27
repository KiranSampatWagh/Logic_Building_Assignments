//Write a program which accept string form user and return difference between frequency of small char and
//frequency of captil char.
//"MarvellouS"

#include<stdio.h>
int Difference(char *str)
{
    int iCntSmall = 0;
    int iCntCaptil = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCntSmall++;
        }
        else
        {
            iCntCaptil++;
        }
        *str ++;
    }
    return(iCntSmall - iCntCaptil);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}