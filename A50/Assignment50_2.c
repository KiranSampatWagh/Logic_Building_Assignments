/* Write a program which accept one number form user and and off 7th and 10th bit 
that number. return modified number.

Input: 577

Output: 1
*/

#include<stdio.h>

// 1111 1111 1111 1111 1111 1101 1011 1111 
//0Xfffffdbf

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0Xfffffdbf;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
} 

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &Value);

    iRet = OffBit(Value);

    printf("Modified number is %d\n", iRet);

    return 0;
}