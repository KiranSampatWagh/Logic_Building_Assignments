/* Write Java program which accept Marks of N students from user and display class of each students.

Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with distinction


Input:  67.3    45.8    88.9    77.5    55.2

Output: 67.3    First class 
        45.8    Pass class
        88.9    First class with distinction
        77.5    First class with distinction
        55.2    Second class

*/

import java.util.*;

class ArrayDemo 
{
    public void Percentage(float arr[])
    {
        for(int i = 0; i < arr.length ; i++)
        {
            if(arr[i] < 35)
            {
                System.out.println(arr[i]+"\t Fail");
            }
            else if(arr[i] < 50)
            {
                System.out.println(arr[i]+"\t Pass class");
            }
            else if(arr[i] < 60)
            {
                System.out.println(arr[i]+"\t Second class");
            }
            else if(arr[i] < 70)
            {
                System.out.println(arr[i]+"\t First class");
            }
            else if(arr[i] > 70)
            {
                System.out.println(arr[i]+"\t First class with distinction");
            }
        }
    }
}

class Assignment43_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of Array: ");
        int iSize = sobj.nextInt();

        float Arr[] = new float [iSize];

        System.out.println("Enter the "+iSize+" elements in Arr: ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextFloat();
        }
        
        aobj.Percentage(Arr);

    }
}