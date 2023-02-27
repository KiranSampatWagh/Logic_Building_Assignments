// write a java program which accept string from user and check whether it contains volwels in it or not.
//Input = "MarvellouS"
//Output = TRUE

import java.util.*;


class StringDemo
{
    public boolean Chkvellous(String str)
    {
        boolean flag = false;

        for(int i = 0; i < str.length(); i++)
        {
            if(((str.charAt(i) == 'a') || (str.charAt(i) == 'e') || (str.charAt(i) == 'i') || (str.charAt(i) == 'o') || (str.charAt(i) == 'u')) || ((str.charAt(i) == 'A') || (str.charAt(i) == 'E') || (str.charAt(i) == 'I') || (str.charAt(i) == 'O') || (str.charAt(i) == 'U')))
            {
                flag = true;
                break;
            }
        }  
        return flag;
    }
}

class Assignment31_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");

        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.Chkvellous(str);
        System.out.println("volwels are present in String: "+bRet);
    }
}