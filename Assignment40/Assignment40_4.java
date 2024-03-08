/*
Write a progra which accept one  number from user and check whether bit at first 
or bit at second position is ON or OFF
Input :  10     3   7      
Output :  True
*/

import java.util.*;

class Assignment40_4
{
    public static boolean CheckBit(int iNo, int iPos1,int iPos2)
    {
        int mask1 = 1 << (iPos1 - 1);
        int mask2 = 1 << (iPos2 - 1);

        if(((iNo & mask1) != 0) || ((iNo & mask2) != 0))
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
        int iNo = 0;
        int iPos1 = 0;
        int iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter First position  : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter second position : ");
        iPos2 = sobj.nextInt();

        bRet = CheckBit(iNo, iPos1, iPos2);
    
        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}
