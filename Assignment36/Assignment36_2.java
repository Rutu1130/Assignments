/*
Write a java program which accept 2 strings from user and check whether 
of two strings are equal or not
Input :   "Marvellous Infosystems"
          "Marvellous Infosystems"
                

Output : true
*/
import java.util.*;

class Assignment36_2
{
    public static boolean StrNCmpX(String str1, String str2)
    {   
        if (str1 == str2)
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
      
        String str1 = null;
        String str2 = null;

        System.out.println("Enter First String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter second String : ");
        str2 = sobj.nextLine();
 

        boolean bRet = false;

        bRet =  StrNCmpX(str1, str2);
    
        if(bRet == true)
        {
            System.out.println("Strings are equal : True");
        }
        else
        {
            System.out.println("Strings are not equal : False ");
        }
        sobj.close();
    }
}