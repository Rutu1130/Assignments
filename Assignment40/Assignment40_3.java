/*
Write a progra which accept one  number from user and check whether 9th or 12th bit is
 on or off
Input :  257      
Output :  True
*/

import java.util.*;

class Assignment40_3
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0*121;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)
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
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
    
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
