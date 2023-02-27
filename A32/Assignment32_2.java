//Write a java program which accept N numbers from user and display all such elenments which are divisible by 5.
//Input = 6
//        Elements(85,66,3,80,93,88)
//Output = 85,80

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
            if(Arr[i]%5 == 0)
            {
                System.out.println(+Arr[i]);
            }
        }
    }
}

class Assignment32_3
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