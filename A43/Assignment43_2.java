/* Write Java program which accept array from user and replace each member with summation of its digit.

Input:  89  687 56  549 87  9  

Output: 17  21  11  18  15  9

*/

import java.util.*;

class ArrayDemo 
{
    public void SumArray(int arr[])
    {
        int iDigit = 0;  
        int No = 0; 

        for(int i = 0; i < arr.length ; i++)
        {
            No = 0;
            while(arr[i] != 0)
            {
                iDigit = arr[i] % 10;
                No = No + iDigit;
                arr[i] = arr[i] / 10;
            }
            System.out.print(No+"\t");
        }
    }
}

class Assignment43_2
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
        
        aobj.SumArray(Arr);

    }
}