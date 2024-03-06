/*
write a program which accept one number from user and toggle  7th bit of that
number .Return modified number

Input :     137
Output :    201
*/

import java.util.Scanner;

class Assignment38_3
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0x00000040;

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

        iRet = ToggleBit(iNo);

        System.out.println("Modified number: " + iRet);

        sobj.close();
    }
}
