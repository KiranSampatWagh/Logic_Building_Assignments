// Write a program which check whether 7th, 8th and 9th bit is on or off.

#include<stdio.h>
#include<stdbool.h>
//Write a program which check whether first and last bit is on or off.
//First bit means bit number 1 and last bit mean bit number 32.
//0000   0000    0000    0000    0000    0001    1100    0000
//0X000001c0

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X000001c0;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&Value);

    bRet = ChkBit(Value);

    if(bRet == true)
    {
        printf("7th, 15th, 21th and 28th bit is ON \n");
    } 
    else
    {
        printf("7th, 15th, 21th and 28th bit is OFF \n");
    } 

    return 0;
}