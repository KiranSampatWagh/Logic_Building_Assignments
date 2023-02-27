/* Write Java program which accept array from user and copy the contents of that 
array into another array and return new array.
*/

import java.util.*;

class ArrayDemo 
{
    public int[] CopyArrayRev(int arr[])
    {
        int Narr[] = new int[arr.length];
        int temp = 0;

        for(int i =  0; i < arr.length; i++)
        {
            Narr[temp] = arr[i];
            temp++;
        }
        return Narr;
    }
}

class Assignment42_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of 1st Array: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the "+iSize+" elements of Arr: ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
        int Brr[] = aobj.CopyArrayRev(Arr);

        System.out.println("New array is: ");
        
        for(int k = 0; k < Brr.length; k++)
        {
            System.out.println(Brr[k]+"\t");
        }
    }
}