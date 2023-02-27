/* Write java program which accept string from user and display bellow pattern.

Input: Hello

Output: H e l l o
        H e l l
        H e l 
        H e  
        H
        H e
        H e l 
        H e l l 
        H e l l o  

*/

import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int i = 0; 
        int j = 0;

        for(i = 0; i < str.length()-1; i++)
        {
            for(j = 0; j < str.length()-i; j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                if(i >= j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment38_4
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string: ");
        String s = sobj.nextLine();

        pobj.Display(s);
    }
}