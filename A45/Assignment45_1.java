/* Write a java program which accept two string from user and check 
whether first string is the rotation of second string or not.

Input: abcdefg     cdefgab

Output: True
*/

import java.util.*;

class string
{
    public boolean ChkStr(string str1, string str2)
    {
        
    }
}
class Assignment45_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First string: ");
        String s1 = sobj.nextLine();

        System.out.println("Enter second string: ");
        String s2 = sobj.nextLine();

        String obj = new String();

        boolean bRet = obj.ChkStr(s1, s2);

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