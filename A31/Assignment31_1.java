// write  a java program which accept string from user and count number of captil characters.
//Input = "Marvellous Multi OS"
//Output = 4

import java.util.*;


class StringDemo
{
    public int CountCaptil(String str)
    {
        int iCnt = 0;

        for(int i = 0; i< str.length(); i++)
        {
            if((str.charAt(i)>='A') && (str.charAt(i)<='Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment31_1
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        int iRet = dobj.CountCaptil(str);

        System.out.println("Count of Capptil Latters in String is: "+iRet);
    }
}