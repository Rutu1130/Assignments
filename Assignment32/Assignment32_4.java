/*
Write a program which accept string from user and 
check whether it contains vowels in it or not

Inpuy : Marvellous
Output : True
Inpuy : xyz
Output : False
*/
import java.util.*;

class Assignment32_4
{
    public static boolean DisplayVowels(String str)
    {
        
        int iCnt = 0;
        for ( iCnt = 0; iCnt < str.length(); iCnt++) 
        {
            char Arr[] = str.toCharArray();

            // Check if the character is a vowel
            if(Arr[iCnt]  == 'A' || Arr[iCnt]  == 'E' || Arr[iCnt]  == 'I' || Arr[iCnt]  == 'O' || Arr[iCnt]  == 'U' || Arr[iCnt]  == 'a' || Arr[iCnt]  == 'e' || Arr[iCnt]  == 'i' || Arr[iCnt]  == 'o' || Arr[iCnt]  == 'u' )
            {
                return true;
            }
        }
        return false;
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        boolean bRet = false;
        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        bRet =  DisplayVowels(str);
    
        if(bRet == true)
        {
            System.out.println("it contains vowels");
        }
        else
        {
            System.out.println("it not contains vowels");
        }
    }
}