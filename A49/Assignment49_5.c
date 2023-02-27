//Write a program which check whether first and last bit is on or off.
//First bit means bit number 1 and last bit mean bit number 32.

#include<stdio.h>
#include<stdbool.h>
//1000   0000    0000    0000    0000    0000    0000    0001
//0X80000001

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        printf("first and last bit is ON \n");
    } 
    else
    {
        printf("first and last bit is OFF \n");
    } 

    return 0;
}