/* Write java program which accept number of rows and number of columns from user and display bellow pattern.

Input: iRow = 4     iCol =4

Output: * * * #
        * * # * 
        * # * *
        # * * *

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
                if(j == temp)          //if(i+j == 4-1)
                {
                    System.out.print('#'+"\t");
                    temp--;
                }
                else
                {
                    System.out.print('*'+"\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment40_1
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