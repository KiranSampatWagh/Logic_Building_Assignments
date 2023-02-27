//Accept N number form user and return difference between summetion of even elements and summetion of odd elements.

#include<stdio.h>
#include<stdlib.h>

int SumDiff(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0;
    int i = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the size of number:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the numbers :\n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = SumDiff(ptr , iSize);

    printf("Difference is :%d\n",iRet);

    free(ptr);

    return 0;
}