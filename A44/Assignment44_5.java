/* Write java program which accept array from user and display below pattern.
 Input : 8 9 7 6 4 2 4

 Output:* * * * * * * * 
        * * * * * * * * *
        * * * * * * * 
        * * * * * *
        * * * *
        * *
        * * * *  


 */

 import java.util.*;

 class ArrayDemo
 {
    public void Pattern(int arr[])
    {
        System.out.println("Patter is: ");
        
        for(int i = 0; i < arr.length; i++)
        {
            for(int j =0; j < arr[i]; j++)
            {
                System.out.print('*'+"\t");
            }
            System.out.println();
        }
    }
 } 

 class Assignment44_5
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of array");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the "+iSize+" element of Array:");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        aobj.Pattern(Arr);

    }
 }