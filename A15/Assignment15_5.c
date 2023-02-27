//Aaccept N numbers form user and Accept one another number as No return the frequency of No form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iSize , int iNo )
{
    int iCnt = 0;
    int iFreq = 0; 

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
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
    for(i =0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Frequency(ptr , iLength , iValue);

    printf("Frequency is: %d\n",iRet);
    
    free(ptr);

    return 0;
}