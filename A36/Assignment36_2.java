/* Write java program which accept number of rows and number of columns from user and display below pattern.

Input: iRow = 4   iCol = 4

Output: A B C D
        a b c d
        A B C D
        a b c d

*/    

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';

        for(i= 1 ; i <= iRow; i++)
        {
            if(i % 2 == 0)
            {
                ch = 'a';
                for(j = 0; j < iCol; j++)
                {
                    System.out.print(ch+"\t");
                    ch++;
                }
            }
            else
            {
                ch = 'A';
                for(j = 0; j < iCol; j++)
                {
                    System.out.print(ch+"\t");
                    ch++;
                }
            }
            System.out.println();
        }
    }


}

class Assignment36_2
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