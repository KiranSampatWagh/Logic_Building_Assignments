//Write java program which accept N numbers from user and accept 
//Range, Display all elements from that range.
//Inpute = N = 6
//         Start = 60
//         End = 90
//         elements = 85,66,3,76,93,88 
//Output = 85,66,76,88

import java.util.*;

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+Arr.length+" element: ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        System.out.println();
    }
}

class Number extends Array
{

    public Number(int iSize)
    {
        super(iSize);
    }

    public void Display(int iStart, int iEnd)
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
            {
               System.out.print(Arr[i]+"\t"); 
            }
        }
    }
}

class Assignment34_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array: ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the Start of Range: ");
        int no1 = sobj.nextInt();

        System.out.println("Enter the End of Range: ");
        int no2 = sobj.nextInt();

        Number nobj = new Number(iSize);

        nobj.Accept();

        nobj.Display(no1, no2);
    }
}