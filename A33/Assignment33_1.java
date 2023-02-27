//Write a java program which accept number from user and return the count of even digits.
//Inpute = 2395
//output = 1

import java.util.*;

class Digit
{
    public int CountEven(int no)
    {
        int iCnt = 0;
        int iDigit = 0;
        
        while(no != 0)
        {
            iDigit = no % 10;
            if(iDigit % 2 == 0)
            {
                iCnt++;
            }
            no = no / 10;
        }
        return iCnt;
    }
}

class Assignment33_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number you want: ");

        int iNo = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.CountEven(iNo);

        System.out.println("Count of even digit is :"+iRet);
    }
}