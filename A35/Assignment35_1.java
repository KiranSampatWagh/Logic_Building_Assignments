//Write a java program which accepts 2 strings from user and concat N characters of second string after first string.
//Value of N should be accepted from user.
//Note: If third parameter is greater than the size of second string then concat whole string after first String.

//Input:    "Marvellous Infosystems"
//          "Logic building"
//          5

//Output:   "Marvellous Infosystem Logic"

import java.util.*;

class StringDemo
{
    public String StrNCatX(String src, String dest, int iCnt)
    {
        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray(); 
        char Arr3[] = new char[(Arr1.length)+(Arr2.length)];

        for(int j = 0; j < Arr1.length; j++)
        {
            Arr3[j] = Arr1[j];
        }

        int temp = 0;
        Arr3[Arr1.length] = ' ';

        for(int i = Arr1.length + 1; i < Arr1.length+ iCnt + 1 ; i++)
        {
            Arr3[i] = Arr2[temp];
            temp++;
        }

        String str = new String(Arr3);
        return str;
    }
    
}

class Assignment35_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String: ");
        String str2 = sobj.nextLine();

        System.out.println("Enter number: ");
        int No = sobj.nextInt();

        StringDemo obj = new StringDemo();

        String str = obj.StrNCatX(str1, str2, No);

        System.out.println(str);
    }
}