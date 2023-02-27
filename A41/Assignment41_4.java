/*Write a java program which accept two arrays from user and display odd contents of each array.

Input = 12  57  28  3 
      = 99  23  54  58  6   67

Output= 12  57  28  3  99  23  54  58  6   67 

*/

import java.util.*;

class ArrayDemo
{
    public int[] ArrayConcate(int arr1[], int iSize1, int arr2[], int iSize2)
    {
        int brr[] = new int[iSize1+iSize2];
        
        for(int i = 0; i < arr1.length; i++)
        {
            brr[i] = arr1[i];
        }

        int temp = 0;
        for(int j = arr1.length; j < brr.length; j++)
        {
            brr[j] = arr2[temp];
            temp++;
        }
        return brr;
    }
}

class Assignment41_4
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

        int Array[] = aobj.ArrayConcate(Arr1, iSize1, Arr2, iSize2);

        for(int k = 0; k < Array.length; k++)
        {
            System.out.print(Array[k]+"\t");
        }

    }
}


