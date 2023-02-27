//Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    T ans;

    if(ans < no1 )
    {
        ans = no1;
    }

    if(ans < no2)
    {
        ans = no2;
    }

    if(ans < no3)
    {
        ans = no3;
    }

    return ans;
}

int main()
{
    int iRet = 0, i = 35, j = 25, k = 20;
    iRet = Max(i,j,k);
    cout<<iRet<<"\n";

    float a = 50.0f, b = 40.0f, c = 60.0f;
    float fRet = Max(a,b,c);
    cout<<fRet<<"\n";

    return 0;
}