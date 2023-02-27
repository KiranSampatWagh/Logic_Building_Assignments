//Aaccept N numbers form user and return differenc between frequency of even number and frequency of odd number.

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[] , int iSize)
{
    int iCnt = 0; 
    int iFreqEven = 0;
    int iFreqOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFreqEven++;
        }
        else
        {
            iFreqOdd++;
        }
    }
    return (iFreqEven - iFreqOdd);
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

    printf("Enter the numbers:\n");
    for(i =0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = FrequencyDiff(ptr , iLength);
    printf("Result is: %d",iRet);

    free(ptr);
    
    return 0;
}