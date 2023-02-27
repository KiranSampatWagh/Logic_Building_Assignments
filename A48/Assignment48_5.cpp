/*Write generic program to accept N value and reverse content.

Input: 10   20  30  10  30  40  10  40  10

Output: 10   40  10  40  30  10  30  20  10

*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr, int iSize)
{
    int i = 0;
    
    for(i = iSize; i >= 0; i--)
    { 
        cout<<Arr[i]<<"\t";
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int a = 9;
    Reverse(arr, a);

    return 0;
}