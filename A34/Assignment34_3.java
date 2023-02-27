//Write java program which accept N numbers from user and accept 
//one another number as NO,return index of last occerence of that NO.
//Inpute = N = 6
//         NO = 66
//         elements = 85,66,3,66,93,88 
//Output = 3

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

    public int LastOcc(int No)
    {
        int iOcc = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == No)
            {
                iOcc = i;
            }
        }
        return iOcc;
    }
}

class Assignment34_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array: ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the another number: ");
        int no = sobj.nextInt();

        Number nobj = new Number(iSize);

        nobj.Accept();

        int iRet = nobj.LastOcc(no);

        System.out.println("Index of Last Occerence of NO is: "+iRet);
    }
}