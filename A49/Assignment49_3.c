// Write a program which check whether 7th, 15th, 21th and 28th bit is on or off.

#include<stdio.h>
#include<stdbool.h>

//0000   1000    0001    0000    0100    0000    0100    0000
//0X08104040

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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