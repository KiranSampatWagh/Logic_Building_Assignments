/*Write generic program to accept N value and count frequency of any specfic value.

Input: 10   20  30  10  30  40  10  40  10

value to check frequency: 10

Output: 4

*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *Arr, int iSize, T No)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == No)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = Frequency(arr, 9, 10);

    cout<<iRet<<"\n"; 

    return 0;
}