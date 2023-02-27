//Aaccept N numbers form user and Accept one another number as No, return index of last occerence of that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[] , int iSize , int iNo )
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iLength = 0;
    int iValue = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter the length of element:\n");
    scanf("%d",&iLength);

    printf("Enter the another of number:\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the  numbers:\n");
    for(i = 0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = LastOcc(ptr , iLength , iValue);

    if(iRet == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
    }

    free(ptr);

    return 0;
}