//Write a java program which accept N numbers from user and return difference between summation of even elements and summation of odd elenments.
//Input = 6
//        elements(85,66,3,80,93,88)
//Output = 53(234-181)
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

    public int Difference()
    {
        int iSumE = 0;
        int iSumO = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iSumE = iSumE + Arr[i];
            }
            else
            {
                iSumO = iSumO + Arr[i];
            }
        }
        return(iSumE - iSumO);
    }

}

class Assignment32_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size :");
        
        int iSize = sobj.nextInt();

        ArrayDemo Aobj = new ArrayDemo(iSize);

        Aobj.Accept();   
        
        int iRet = Aobj.Difference();
        System.out.println("Diffrence is :"+iRet);

    }
}