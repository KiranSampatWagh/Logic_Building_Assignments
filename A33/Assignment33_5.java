//Write a java program which accept number from user and return difference between summation of even digits and summation of odd digits
//Inpute = 2395
//output = -15(2-17)

import java.util.*;

class Digit
{
    public int SumDiff(int no)
    {
        int iSumE = 0;
        int iSumO = 0;
        int iDigit = 0;
        
        while(no != 0)
        {
            iDigit = no % 10;
            if(iDigit % 2 == 0)
            {
                iSumE = iSumE + iDigit;
            }
            else
            {
                iSumO = iSumO + iDigit;
            }
            no = no / 10;
        }
        return (iSumE - iSumO);
    }
}

class Assignment33_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number you want: ");

        int iNo = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.SumDiff(iNo);

        System.out.println("Difference is:"+iRet);
    }
}