/*Write generic program to accept one value and one number from user. Print that value 
that number of time on screen.

Input: M    7

Output: M   M   M  M   M   M   M

*/

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize )
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int i = 7;
    char ch = 'M';
    Display(ch,i);

    int a = 6;
    float N = 3.7;
    Display(N,a);

    return 0;
}