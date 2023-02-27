//Write a java program which accepts 2 strings from user and check whether first N contents of two string are equal or not.

//Note:  if third parameter is greater than the size of second string then concat whole string after first string.
//Input:    "Marvellous Infosystems"
//          "Marvellous Logic Building"
//          10

//Output:   TRUE

import java.util.*;

class StringDemo
{
    public boolean StrNCatX(String src, String dest, int iNO)
    {
        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();
        char Arr3[] = new char [(Arr1.length) + (Arr2.length) + 1];
        int iCnt = 0;

        if(Arr2.length < iNO)
        {
            for(int i = 0; i < (Arr1.length); i++)
            {
                Arr3[i] = Arr1[i];
            }
            int temp = 0;
            Arr3[Arr1.length] = ' ';

            for(int ic = Arr1.length + 1; ic < Arr3.length; ic++)
            {
                Arr3[ic] = Arr2[temp];
                temp++;
            }
            System.out.println(Arr3);

            for(int j = 0; j < iNO; j++)
            {
                if(Arr1[j] == Arr3[j])
                {
                    iCnt++;
                }
            }
        }
        else
        {
            for(int j = 0; j < iNO; j++)
            {
                if(Arr1[j] == Arr2[j])
                {
                    iCnt++;
                }
            }
        }

        if(iCnt == iNO)
        {
            return true;
        }
        else
        {
            return false;
        }   
    } 
}

class Assignment35_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String: ");
        String str2 = sobj.nextLine();

        System.out.println("Enter number: ");
        int no = sobj.nextInt();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.StrNCatX(str1, str2, no);

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