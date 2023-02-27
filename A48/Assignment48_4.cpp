/*Write generic program to accept N value and search lAST occurence of any specfic value.

Input: 10   20  30  10  30  40  10  40  10

value to search: 40

Output: 8

*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *Arr, int iSize, T No)
{
    int i = 0;
    int iCnt = 0;
    
    for(i = 0; i < iSize; i++)
    { 
        if(Arr[i] == No)
        {
            iCnt = i;
        }
    }
    return (iCnt+1);
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr, 9, 40);

    cout<<iRet<<"\n"; 

    return 0;
}