//Write generic program to accept N value from user and return smallest values.

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize )
{
    T Min    = arr[0];

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if( Min > arr[i])
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int i = 5;
    int iRet = Min(arr,i);
    cout<<iRet<<"\n";

    int a = 4;
    float fRet = Min(brr,a);
    cout<<fRet<<"\n";

    return 0;
}