// write  a java program which accept string from user and count number of Small characters.
//Input = "Marvellous"
//Output = 9

import java.util.*;


class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0;

        for(int i = 0; i< str.length(); i++)
        {
            if((str.charAt(i)>='a') && (str.charAt(i)<='z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment31_2
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        int iRet = dobj.CountSmall(str);

        System.out.println("Count of Small Latters in String is: "+iRet);
    }
}