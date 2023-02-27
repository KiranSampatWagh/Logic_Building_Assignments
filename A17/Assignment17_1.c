//Aaccept N numbers form user and return the largest number.

#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[] , int iSize )
{
    int iCnt = 0;
    int iMax = Arr[0]; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter the length of element:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the  numbers:\n");
    for(i =0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr , iLength);

    printf("Largest no is:%d\n",iRet);
    
    free(ptr);

    return 0;
}