//Write a java program which accept number from user and return the multiplaction of all digits.
//Inpute = 2395
//output = 270

import java.util.*;

class Digit
{
    public int Multiply(int no)
    {
        int iMult = 1;
        int iDigit = 0;
        
        while(no != 0)
        {
            iDigit = no % 10;
            if(iDigit != 0)
            {
                iMult = iMult * iDigit;
            }
            no = no / 10;
        }
        return iMult;
    }
}

class Assignment33_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number you want: ");

        int iNo = sobj.nextInt();

        Digit obj = new Digit();

        int iRet = obj.Multiply(iNo);

        System.out.println("Multiplaction of all digit is :"+iRet);
    }
}