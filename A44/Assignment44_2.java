/* Write java program which accept array of character from user and return count of vowels character.

 Input : b  N   e   B   R   b   A   i   G   i 

 Output: 4

 */

 import java.util.*;

 class ArrayDemo
 {
    public int ArrayVowels(char arr[])
    {
        for(int j = 0; j < arr.length; j++)
        {
            if(arr[j] >= 'A' && arr[j] <= 'Z')
            {
                arr[j] = (char) (arr[j] + 32);
            }
        }
        
        int iCnt = 0;
        for(int k = 0; k < arr.length; k++)
        {
            if((arr[k] == 'a')||(arr[k] == 'e')||(arr[k] == 'k')||(arr[k] == 'o')||(arr[k] == 'u'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
 } 

 class Assignment44_2
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

        int iRet = aobj.ArrayVowels(Arr);

        System.out.println(iRet);
    }
 }