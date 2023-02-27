/* Write java program which accept array of character from user and return difference between 
frquency of captil and frequency of small character.

 Input : b  N   e   B   R   b   A   I   O   G   i 

 Output: 3(7-4)

 */

 import java.util.*;

 class ArrayDemo
 {
    public int Difference(char arr[])
    {
        int iCntC = 0;
        int iCntS = 0;

        for(int j = 0; j < arr.length; j++)
        {
            if(arr[j] >= 'A' && arr[j] <= 'Z')
            {
                iCntC++;
            }
            else
            {
                iCntS++;
            }
        }
        
        return (iCntC -iCntS);
    }
 } 

 class Assignment44_4
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayDemo aobj = new ArrayDemo();

        System.out.println("Enter the size of array");
        int iSize = sobj.nextInt();

        char Arr[] = new char[iSize];

        System.out.println("Enter the "+iSize+" element of Array:");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }

        int iRet = aobj.Difference(Arr);

        System.out.println(iRet);
    }
 }