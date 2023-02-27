/*Write a java program which accept two arrays from user and display contents of each array.

Input = 2  9   7   5   2   3   
      = 9  3   5   5  

Output= 2  9   7   5   2   3   
      = 9  3   5   5 

*/

import java.util.*;

class ArrayDemo
{
    public void Display(int arr1[], int arr2[])
    {
        for(int i = 0; i < arr1.length; i++)
        {
            System.out.print(arr1[i]+"\t");
        }

        System.out.println();

        for(int j = 0; j < arr2.length; j++)
        {
            System.out.print(arr2[j]+"\t");
        }
    }
}

class Assignment41_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of 1st Aarray: ");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];

        System.out.println("Enter the "+iSize1+" elements of Arr1");

        for(int i = 0; i < iSize1; i++)
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter the size of 2nd Aarray: ");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter the "+iSize2+" elements of Arr2");

        for(int j = 0; j < iSize2; j++)
        {
            Arr2[j] = sobj.nextInt();
        }

        aobj.Display(Arr1, Arr2);

    }
}


