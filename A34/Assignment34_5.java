//Write java program which accept N numbers from user and return
//product of all odd elements
//Inpute = N = 6
//         elements = 15,66,3,70,10,88 
//Output = 45

import java.util.*;


class Number
{
    public int Product(int Arr[])
    {
        int iProd = 1;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] % 2 != 0)
            {
                iProd = iProd * Arr[i];
            }
        }
        return iProd;
    }
}

class Assignment34_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array: ");
        int iSize = sobj.nextInt();
        
        int Arr[] = new int [iSize];

        System.out.println("enter the "+Arr.length+" elements");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Number nobj = new Number();

        int iRet = nobj.Product(Arr);

        System.out.println("Product of all Odd elements is: "+iRet);
    }
}