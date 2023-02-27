//Accept N number form user and display all such element which are even and multiples by 11.

#include<stdio.h>
#include<stdlib.h>

void DivByThreeAndFive(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int i = 0;
    int *ptr = NULL;

    printf("Enter the size of number:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the numbers :\n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DivByThreeAndFive(ptr , iSize);

    free(ptr);

    return 0;
}