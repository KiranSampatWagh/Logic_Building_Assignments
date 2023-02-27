//Aaccept N numbers form user and check whether the number contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkEleven(int Arr[] , int iSize)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(Arr[iCnt] == 11)
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
    int *ptr = NULL;
    int i = 0;
    bool bRet = false;

    printf("Enter the length of element:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the  numbers:\n");
    for(i =0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = ChkEleven(ptr , iLength);
    
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;
}