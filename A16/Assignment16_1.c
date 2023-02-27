//Aaccept N numbers form user and Accept one another number as No, check whether the No is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNo(int Arr[] , int iSize , int iNo )
{
    int iCnt = 0;
    int iFreq = 0; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(Arr[iCnt] == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iLength = 0;
    int iValue = 0;
    int *ptr = NULL;
    int i = 0;
    bool bRet = false;

    printf("Enter the length of element:\n");
    scanf("%d",&iLength);

    printf("Enter the another of number:\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the  numbers:\n");
    for(i =0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = ChkNo(ptr , iLength , iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    
    free(ptr);

    return 0;
}