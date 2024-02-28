/*
Write a program which accept string from user and 
display it in reerse order

Inpuy : Marvellous
Output : SuollevraM

*/


import java.util.*;
class Assignment32_5
{
    public static void  Reverse(String str)
    {
        int iCnt = 0;
      
        char Arr[] = str.toCharArray();
        
        for(iCnt = Arr.length - 1 ; iCnt >=0; iCnt--)
        {
            System.out.println(Arr[iCnt]);
        }
    
    
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();
        Reverse(str); 
        sobj.close();
    }
}