//Write generic program to accept N value from user and return largest values.

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize )
{
    T Max ;

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if( Max < arr[i])
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int i = 5;
    int iRet = Max(arr,i);
    cout<<iRet<<"\n";

    int a = 4;
    float fRet = Max(brr,a);
    cout<<fRet<<"\n";

    return 0;
}