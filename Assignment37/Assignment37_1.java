/*
write a program which checks whether 15 bit is on or off
*/

import java.util.*;

class Assignment37_5
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0x00000a00;
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
            System.out.println(" 15th bits are ON");
        }
        else
        {
            System.out.println("Bits are off");
        }
    }
}


    
