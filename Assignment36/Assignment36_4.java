/*
Write a java program which accept string from user and reverse the contents of that string 
by toggling the case
 

Input :   aCBdef
Output :  FEDcbA

*/

import java.util.*;
class Assignment36_4 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String iRet =null;

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        iRet = StrRevTogX(str);
        
        System.out.println("reverse toggle string is  : "+iRet);
        
        sobj.close();
    }
    public static String StrRevTogX(String str)
    {
        StringBuilder reversed = new StringBuilder(str).reverse();

        for (int i = 0; i < reversed.length(); i++) {
            char currentChar = reversed.charAt(i);

            if (Character.isUpperCase(currentChar)) 
            {
                reversed.setCharAt(i, Character.toLowerCase(currentChar));
            } 
            else if (Character.isLowerCase(currentChar)) 
            {
                reversed.setCharAt(i, Character.toUpperCase(currentChar));
            }
        }

        return reversed.toString();
    }
}
