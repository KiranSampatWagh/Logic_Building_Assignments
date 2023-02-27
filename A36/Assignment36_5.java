/* Write java program which accept number of rows and number of columns from user and display below pattern.

Input: iRow = 3   iCol = 4

Output: 1  2  3  4 
        5  6  7  8 
        9 10 11 12
        

*/    

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        int iCnt = 1;

        for(i= 0 ; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(iCnt+"\t");
                iCnt++;
            }
            System.out.println();
        }
    }


}

class Assignment36_5
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