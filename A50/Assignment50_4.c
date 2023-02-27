/* Write a program which accept one number form user and and toggle 7th and 10th bit of
that number. return modified number.

Input: 137

Output: 713
*/

#include<stdio.h>

// 0000 0000 0000 0000 0000 0010 0100 0000 
//0X00000240

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000240;
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