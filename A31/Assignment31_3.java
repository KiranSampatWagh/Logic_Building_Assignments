// write  a java program which accept string from user and return difference between frequency of Small characters and frequenncy of captil characters.
//Input = "MarvellouS"
//Output = 6(8-2)

import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCntS = 0;
        int iCntC = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i)<='z'))
            {
                iCntS++;
            }
            else
            {
                iCntC++;
            }
        }
        return(iCntS - iCntC);
    }
}

class Assignment31_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");

        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountDiff(str);
        System.out.println("Count of Diff in Characters: "+iRet);
    }
}