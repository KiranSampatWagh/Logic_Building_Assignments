/* Write java program which accept string from user and display bellow pattern.

Input: Hello

Output: H e l l o
        H e l l o
        H e l l o
        H e l l o
        H e l l o

*/

import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int i = 0; 
        int j = 0;

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment38_1
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string: ");
        String str = sobj.nextLine();

        pobj.Display(str);
    }
}