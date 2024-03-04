/*
Write a java program which accept strings from user and check whether the string is 
palindrome or not without considering its case

Input :  1abccBA1
Output : true
*/
import java.util.*;

class Assignment36_5
{
    public static boolean StrPallindrome(String str)
    {   
        String cleanedStr = str.replaceAll("\\s", "").toLowerCase();

        return cleanedStr.equals(new StringBuilder(cleanedStr).reverse().toString());
          
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter First String : ");
        str = sobj.nextLine();

        boolean bRet = false;

        bRet =  StrPallindrome(str);
    
        if(bRet )
        {
            System.out.println("Strings  is a palindrome....");
        }
        else
        {
            System.out.println("Strings  is a palindrome....");
        }
        sobj.close();
    }
}