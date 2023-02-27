//Aaccept N numbers form user and accept Range, display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[] , int iSize , int iStart , int iEnd )
{
    int iCnt = 0;

    printf("Element:");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
       {
            printf(" %d\t",Arr[iCnt]);
       }
    }
}

int main()
{
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *ptr = NULL;
    int i = 0;
    

    printf("Enter the length of element:\n");
    scanf("%d",&iLength);

    printf("Enter the starting point number:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point number:\n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the  numbers:\n");
    for(i = 0 ; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Range(ptr , iLength , iValue1 , iValue2);

    free(ptr);

    return 0;
}