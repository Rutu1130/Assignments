/*
write a program which accept one number from user and  oh its first 4 bits.
Return modified number

Input :     73
Output :    79
*/

import java.util.Scanner;

class Assignment38_5
{
    public static int OnBit(int iNo)
    {
        int iMask = 0x0000000F; // Mask to flip the first 4 bits

        // Flip the first 4 bits
        iNo = iNo ^ iMask;

        return iNo;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        iRet = OnBit(iNo);

        System.out.println("Modified number: " + iRet);

        sobj.close();
    }
}
