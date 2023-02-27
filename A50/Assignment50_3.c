/* Write a program which accept one number form user and and toggle 7th bit of
that number. return modified number.

Input: 137

Output: 201
*/

#include<stdio.h>

// 0000 0000 0000 0000 0000 0000 0100 0000 
//0X00000040

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

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