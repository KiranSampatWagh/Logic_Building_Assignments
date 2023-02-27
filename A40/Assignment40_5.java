/* Write java program which accept number of rows and number of columns from user and display bellow pattern.

Input: iRow = 5     iCol = 5

Output: 1 2 3 4 5
        1 2     5
        1   3   5
        1     4 5
        1 2 3 4 5 

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        int iCnt = 0;

        for(i = 1; i <= iRow; i++)
        {
            iCnt = 1;
            for(j = 1; j <= iCol; j++)
            {
                if(( i == 1 )||( i == iRow )||( j == 1 )||( j == iCol )||( i == j))        
                {
                    System.out.print(iCnt+"\t");
                    iCnt++;
                }
                else 
                {
                    System.out.print(" \t");
                    iCnt++;
                }
            }    
            System.out.println();
        }
    }
}

class Assignment40_5
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int i = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        int j = sobj.nextInt();

        pobj.Display(i, j);
    }
}