/*Write a java program which accept two arrays from user and display odd contents of each array.

Input = 2   9   6   5   2   3   
      = 45  6   12  18  23  4  

Output= 9   5   3      
      = 45  23

*/

import java.util.*;

class ArrayDemo
{
    public void Display(int arr1[], int arr2[])
    {
        for(int i = 0; i < arr1.length; i++)
        {
            if( arr1[i] % 2 != 0)
            {
                System.out.print(arr1[i]+"\t");
            }
        }

        System.out.println();

        for(int j = 0; j < arr2.length; j++)
        {
            if( arr2[j] % 2 != 0)
            {
                System.out.print(arr2[j]+"\t");
            }
        }
    }
}

class Assignment41_3
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


