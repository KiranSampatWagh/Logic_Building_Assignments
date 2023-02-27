//Aaccept N numbers form user and return difference between the largest number and smallest number.

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[] , int iSize )
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0]; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return (iMax - iMin);
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

    iRet = Difference(ptr , iLength);

    printf("Difference is:%d\n",iRet);
    
    free(ptr);

    return 0;
}