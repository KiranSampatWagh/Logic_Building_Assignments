/* Write a program which accept one number form user and and on its first 4 bits.
return modified number.

Input: 73

Output: 79
*/

#include<stdio.h>

// 0000 0000 0000 0000 0000 0000 0000 1111 
//0X0000000f

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X0000000f;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
} 

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &Value);

    iRet = ToggleBit(Value);

    printf("Modified number is %d\n", iRet);

    return 0;
}