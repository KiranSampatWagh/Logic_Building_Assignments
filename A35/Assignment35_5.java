//Write a java program which accepts string from user and check whether the string is pallindrome or not without considering the case.

//Input:    "1abccBA1"      

//Output:   TRUE

import java.util.*;

class StringDemo
{
    public boolean strPallindrome (String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char [Arr.length];

        for(int i = 1; i < (Arr.length - 1); i++)
        {
            if((Arr[i] >= 'A')&&(Arr[i] <= 'Z'))
            {
                Arr[i] = (char) (Arr[i] + 32);
            }
        }
    
        int temp = 0;

        for(int j = (Arr.length) - 1; j >= 0; j--)
        {
            Brr[temp] = Arr[j];
            temp++;
        }

        int temp2 = 0;
        int iCnt = 0;

        for(int k = 0; k < Arr.length; k++)
        {
            if(Arr[k] == Brr[temp2])
            {
                iCnt++;
            }
            temp2++;
        }

        if(iCnt == Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
}

class Assignment35_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string: ");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.strPallindrome(str);

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