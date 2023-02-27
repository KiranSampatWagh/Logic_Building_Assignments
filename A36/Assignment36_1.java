/* Write java program which accept number of rows and number of columns from user and display below pattern.

Input: iRow = 4   iCol = 4

Output: A B C D
        A B C D
        A B C D
        A B C D

*/    

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = 'A';

        for(i= 0 ; i < iRow; i++)
        {
            ch = 'A';
            for(j = 0; j < iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
        }
    }


}

class Assignment36_1
{
    public static void main(String A[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of column: ");
        int j = sobj.nextInt();

        pobj.Display(i, j);
    }
}