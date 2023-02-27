// Write a program which check whether 15th bit is on or off.

#include<stdio.h>
#include<stdbool.h>

//0000   0000    0000    0000    0100    0000    0000    0000
//OX00004000

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00004000;
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
        printf("15th bit is ON \n");
    } 
    else
    {
        printf("15th bit is OFF \n");
    } 

    return 0;
}