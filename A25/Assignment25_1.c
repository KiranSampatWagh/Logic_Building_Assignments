//Write a program which accept string form user and count number of captil characters.
//"Marvellous Multi OS"

#include<stdio.h>

int CountCaptil(char *str)
{
    int iCnt = 0;


    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^\n]s",&arr);

    iRet = CountCaptil(arr);

    printf("%d\n",iRet);

    return 0;
}