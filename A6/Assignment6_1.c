//Write program which accept number form user and print that name

//Input: Kiran Wagh
//Output: Kiran Wagh

#include<stdio.h>
int main()
{
    char Name[30];

    printf("Enter full name:");

    scanf("%[^'\n']s",&Name);

    printf("Your name is : %s",Name);

    return 0;
}