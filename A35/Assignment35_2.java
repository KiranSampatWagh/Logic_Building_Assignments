//Write a java program which accepts 2 strings from user and check whether contents of two string are equal or not.

//Input:    "Marvellous Infosystems"
//          "Marvellous Infosystems"

//Output:   TRUE

import java.util.*;

class StringDemo
{
    public boolean StrNCatX(String src, String dest)
    {
        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();
        int iCnt = 0;

        for(int j = 0; j < Arr1.length; j++)
        {
            if(Arr1[j] == Arr2[j])
            {
                iCnt++;
            }
        }
        if(iCnt == Arr1.length)
        {
            return true;
        }
        else
        {
            return false;
        }   
    } 
}

class Assignment35_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String: ");
        String str2 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.StrNCatX(str1, str2);

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