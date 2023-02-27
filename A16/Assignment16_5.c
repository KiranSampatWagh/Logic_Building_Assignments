//Accept N numbers form user and return product all odd number.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[] , int iLength)
{
    int i =0;
    int iProd =1;

    for(i =0; i < iLength; i++)
    {
        if(Arr[i] % 2 !=0)
        {
            iProd = iProd * Arr[i];
        }
    }
    return iProd;
}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *ptr =NULL;
    int iRet = 0;

    printf("Enter the size of element:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("enter the elements:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++);
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr , iSize);

    printf("Product of All odd element is :%d\n",iRet);

    free(ptr);
    
    return 0;    
}