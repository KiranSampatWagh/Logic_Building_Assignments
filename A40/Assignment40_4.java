/* Write java program which accept number of rows and number of columns from user and display bellow pattern.

Input: iRow = 5     iCol = 5

Output: * * * * * * 
        * # # # * *
        * # # * $ * 
        * # * $ $ *
        * * $ $ $ *
        * * * * * *

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        int temp = iRow;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(( i == 1 )||( i == iRow )||( j == 1 )||( j == iCol )||( j <= temp))        
                {
                    System.out.print('*'+"\t");
                    temp--;
                }
                else if()
            }    
            System.out.println();
        }
    }
}

class Assignment40_4
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