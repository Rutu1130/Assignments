/*
Write a java program which accept 2 strings from user and check whether first N contents
of two strings are equal or not

Note : If third parameter is greater than the size of second string then 
concat whole string after first string 

Input :   "Marvellous Infosystems"
          "Marvellous Infosystems"
                

Output : true
*/
import java.util.*;

class Assignment36_3
{
    public static boolean StrNCmpX(String str1, String str2, int iNO)
    {   
        if (iNO > str2.length())
        {
            return true;
        }
        else
        {
            return false;
        }     
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        String str1 = null;
        String str2 = null;

        System.out.println("Enter First String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second String : ");
        str2 = sobj.nextLine();
        
        System.out.println("Enter the value of N:");
        iValue = sobj.nextInt();

        boolean bRet = false;

        bRet =  StrNCmpX(str1, str2,iValue);
    
        if(bRet == true)
        {
            System.out.println("Strings are equal ");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
        sobj.close();
    }
}