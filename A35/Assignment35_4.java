//Write a java program which accepts string from user and reverse containts of that string by toggling the case.

//Input:    "aCBdef"      

//Output:   "FEDbcA"

import java.util.*;

class StringDemo
{
    public String strRevTogX(String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char [Arr.length];

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A')&&(Arr[i] <= 'Z'))
            {
                Arr[i] = (char) (Arr[i] + 32);
            }
            else if((Arr[i] >= 'a')&&(Arr[i] <= 'z'))
            {
                Arr[i] = (char) (Arr[i] - 32);
            }
        }
    
        int temp = 0;

        for(int j = (Arr.length) - 1; j >= 0; j--)
        {
            Brr[temp] = Arr[j];
            temp++;
        }

        String str2 = new String(Brr);

        return str2;
    } 
}

class Assignment35_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string: ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        String str1 = obj.strRevTogX(str);

        System.out.println("updated string is: "+str1);
    }
}