/*
Write a java program which accept string from user and return difference between
 frequency of small characters and frequency of capital characters.

Input :   "MarvellouS"

Output :  6   (8-2)
*/


import java.util.Scanner;

class Assignment32_3 
{
    public static int DiffCapitalSmall(char[] str) 
    {
        int iCnt = 0;
        int iSmall = 0;
        int iCapital = 0;

        for ( iCnt = 0; iCnt < str.length; iCnt++) 
        {
            if ((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
            {
                iSmall++;
            }

            else if ((str[iCnt] >= 'A') && (str[iCnt] <= 'Z')) 
            {
                iCapital++;
            }
        }
        int Difference =  iSmall - iCapital;
        return Difference;
    }

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter the string: ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        iRet = DiffCapitalSmall(Arr);

        System.out.println("Difference between frequency of small and capital letters: " + iRet);
    }
}
