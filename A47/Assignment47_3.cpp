//Write generic program to accept N value from user and return addition of that values.

#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize )
{
    T Sum ;

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int i = 5;
    int iSum = AddN(arr,i);
    cout<<iSum<<"\n";

    int a = 4;
    float fSum = AddN(brr,a);
    cout<<fSum<<"\n";

    return 0;
}