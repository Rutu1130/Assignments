/*
Write a java program which accept 2 strings from user and concat N characters 
of second string after first string. Value of N should be accepted from user

Note : If third parameter is greater than the size of second string then 
concat whole string after first string 

Input :   "Marvellous Infosystems"
            "Logic Building"
                5


Output :  Marvellous Infosystems Logic"

*/

import java.util.*;
class Assignment36_1 
{
    public static int CountSmall(String str)
    {
        int iCnt = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String iRet =null;
        int iValue = 0;

        String str1 = null;
        String str2 = null;

        System.out.println("Enter First String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second String : ");
        str2 = sobj.nextLine();

        System.out.println("Enter the value of N:");
        iValue = sobj.nextInt();

        iRet = StrNCat(str1, str2,iValue);
        
        System.out.println("updated string is  : "+iRet);
        
        sobj.close();
    }
    public static String StrNCat(String str1, String str2, int iNo)
    {
        if(iNo >= str1.length())
        {
            return str1 +" " + str2;
        }
        else
        {
            return str1 + " " + str2.substring(0,iNo);
        }
    }
}
