/* Write Java program which accept array from user and check whether that array 
and its elements are palindrome or not.

Input: 11   252 387783  252 11

Output: TRUE

Input: 11   252 387783  77  11

Output: FALSE

*/

import java.util.*;

class ArrayDemo 
{
    public boolean CheckPalindrome(int arr[])
    {
        int Narr[] = new int[arr.length];
        int temp = 0;

        for(int i = arr.length-1; i >= 0 ; i--)
        {
            Narr[temp] = arr[i];
            temp++;
        }
        
        int temp2 = 0;
        int iCnt = 0;
        for(int k = 0; k < arr.length; k++)
        {
            if(arr[k] == Narr[temp2])
            {
                iCnt++;
            }
            temp2++;
        }

        if(iCnt == arr.length)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

class Assignment42_5
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
        
        boolean bRet = aobj.CheckPalindrome(Arr);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }        
        
    }
}