/* Write java program which accept array of character from user and accept one character.
 Return occurence of that character without considering case.

 Input : b  N   e   B   R   b   A   i   G   i   B 
         b

 Output: 4

 */

 import java.util.*;

 class ArrayDemo
 {
    public int ArrayVowels(char arr[], char Ch)
    {
        for(int j = 0; j < arr.length; j++)
        {
            if(arr[j] >= 'A' && arr[j] <= 'Z')
            {
                arr[j] = (char) (arr[j] + 32);
            }
        }
        
        if((Ch >= 'A')&&(Ch <= 'Z'))
        {
            Ch = (char) (Ch + 32);
        }
        
        int iCnt = 0;
        for(int k = 0; k < arr.length; k++)
        {
            if((arr[k] == Ch))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
 } 

 class Assignment44_3
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

        System.out.println("Enter the one character: ");
        char ch = sobj.next().charAt(0);

        int iRet = aobj.ArrayVowels(Arr, ch);

        System.out.println(iRet);
    }
 }