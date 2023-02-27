// write a java program which accept string from user and Display it in reverse oreder.
//Input = "MarvellouS"
//Output = "SuollevraM"

import java.util.*;


class StringDemo
{
    public void Reverse(String str)
    {
        for(int i = (str.length()-1); i >= 0; i--)
        {
            System.out.print(str.charAt(i));
        }
    }
}

class Assignment31_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");

        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        obj.Reverse(str);
    }
}