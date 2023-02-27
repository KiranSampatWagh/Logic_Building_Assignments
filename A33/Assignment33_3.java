//Write a java program which accept number from user and return the count of digits in between 3 and 7.
//Inpute = 2395
//output = 1

import java.util.*;

class Digit
{
    public int CountRange(int no)
    {
        int iCnt = 0;
        int iDigit = 0;
        
        while(no != 0)
        {
            iDigit = no % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCnt++;
            }
            no = no / 10;
        }
        return iCnt;
    }
}

class Assignment33_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number you want: ");

        int iNo = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.CountRange(iNo);

        System.out.println("Count of digit is :"+iRet);
    }
}