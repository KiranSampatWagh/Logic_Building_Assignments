/* Write java program which accept array of character from user and replace each capital 
 character with its correspond small character.

 Input : b  N   j   B   R   b   A   d   G   G 

 Output: b  n   j   b   r   b   a   d   g   g

 */

 import java.util.*;

 class ArrayDemo
 {
    public void ArrayReplace(char arr[])
    {
        for(int j = 0; j < arr.length; j++)
        {
            if(arr[j] >= 'A' && arr[j] <= 'Z')
            {
                arr[j] = (char) (arr[j] + 32);
            }
        }

        for(int k = 0; k < arr.length; k++)
        {
            System.out.print(arr[k]+"\t");
        }
    }
 } 

 class Assignment44_1
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

        aobj.ArrayReplace(Arr);
    }
 }