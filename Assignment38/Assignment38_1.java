/*
write a program which accept one number from user and off 7th bit of that
number if it is in .Return modified number

Input :     79
Output :    15
*/

import java.util.Scanner;

class Assignment38_1
{
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000040;

        int iResult = iNo & iMask;

        if (iResult != 0)
        {
            iNo = iNo ^ iMask;
        }

        return iNo;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Modified number: " + iRet);

        sobj.close();
    }
}
