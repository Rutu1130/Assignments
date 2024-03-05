/*
write a program which checks whether 7th and 15th & 21st ,28th  bit is on or off
*/


import java.util.*;

class Assignment37_3
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
            System.out.println("7th, 15th, 21st, and 28th bits are ON");
        }
        else
        {
            System.out.println("Bits are off");
        }
        sobj.close();
    }
}
