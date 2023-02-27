/* Write java program which accept two array from user and display minimum elements of each array.

Inpute: 2   9   7   5   2   3   
        9   3   5   5

Output: 2
        3

*/

import java.util.*;

class ArrayDemo
{
    public void Display(int arr1[], int arr2[])
    {
        int iMin1 = arr1[0];

        for(int i = 0; i < arr1.length; i++)
        {
            if(arr1[i] < iMin1)
            {
                iMin1 = arr1[i];
            }
        }
        System.out.println(+iMin1);

        int iMin2 = arr2[0];

        for(int j = 0; j < arr2.length; j++)
        {
            if(arr2[j] < iMin2)
            {
                iMin2 = arr2[j];
            }
        }
        System.out.println(+iMin2);
    }
}

class Assignment42_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of 1st Array: ");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int [iSize1];

        System.out.println("Enter the "+iSize1+" elements of Arr1: ");

        for(int i = 0; i < Arr1.length; i++)
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter the size of 2nd Array: ");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int [iSize2];

        System.out.println("Enter the "+iSize2+" elements of Arr2: ");

        for(int i = 0; i < Arr2.length; i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        aobj.Display(Arr1, Arr2);
    }
}