/* Write Java program which accept array of characters from user and count number of capital character.

Input:  b   N   j   B   R   b   A   d   G   G 

Output: 6

*/

import java.util.*;

class ArrayDemo 
{
    public int ArrayCapital(char arr[])
    {
        int iCnt = 0;  
       
        for(int i = 0; i < arr.length ; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment43_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of 1st Array: ");
        int iSize = sobj.nextInt();

        char Arr[] = new char [iSize];

        System.out.println("Enter the "+iSize+" character elements in Arr: ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }
        
        int iRet = aobj.ArrayCapital(Arr);

        System.out.println(iRet);

    }
}