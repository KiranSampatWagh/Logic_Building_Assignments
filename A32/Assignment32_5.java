//Write a java program which accept N numbers from user and display all such elenments which are Even and divisible by 11.
//Input = 6
//        elements(85,66,3,55,93,88)
//Output = 66,5,88

import java.util.*;

class ArrayDemo
{
    public int Arr[];

    public ArrayDemo(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+Arr.length+" element of Array : ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        System.out.println();
    }

    public void Display()
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 11 == 0)
            {
                System.out.println(+Arr[i]);
            }
        }
    }
}

class Assignment32_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size :");
        
        int iSize = sobj.nextInt();

        ArrayDemo Aobj = new ArrayDemo(iSize);

        Aobj.Accept();   
        
        Aobj.Display();

    }
}