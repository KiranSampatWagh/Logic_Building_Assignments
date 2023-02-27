/* Write java program which accept number of rows and number of columns from user and display below pattern.

Input: iRow = 3   iCol = 5

Output: 5 4 3 2 1 
        5 4 3 2 1 
        5 4 3 2 1 

*/    

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        int iCnt = 0;

        for(i= 0 ; i < iRow; i++)
        {
            iCnt = 5;
            for(j = 0; j < iCol; j++)
            {
                System.out.print(iCnt+"\t");
                iCnt--;
            }
            System.out.println();
        }
    }
}

class Assignment37_3
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