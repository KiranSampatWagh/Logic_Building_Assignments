/* Write java program which accept two array from user and return difference between summation of array.

Inpute: 2   9   7   5   2   3   
        9   3   5   5

Output: 6

*/

import java.util.*;

class ArrayDemo
{
    public int DiffArray(int arr1[], int arr2[])
    {
        int iSum1 = 0;

        for(int i = 0; i < arr1.length; i++)
        {
            iSum1 = iSum1 + arr1[i];
        }
        
        int iSum2 = 0;

        for(int j = 0; j < arr2.length; j++)
        {
            iSum2 = iSum2 +arr2[j];
        }
        return (iSum1 - iSum2);
    }
}

class Assignment42_1
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

        int Ans = aobj.DiffArray(Arr1, Arr2);

        System.out.println(Ans);
    }
}