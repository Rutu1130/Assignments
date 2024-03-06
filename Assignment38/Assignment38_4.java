/*
write a program which accept one number from user and toggle  7th and 10th bit of that
number .Return modified number

Input :     137
Output :    713
*/

import java.util.Scanner;

class Assignment38_4
{
    public static int ToggleBit(int iNo, int bit1, int bit2)
    {
        int iMask1 = 1 << (bit1 - 1);  
        int iMask2 = 1 << (bit2 - 1);

        iNo = iNo ^ iMask1;
        iNo = iNo ^ iMask2;

        return iNo;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo , 7,10);

        System.out.println("Modified number: " + iRet);

        sobj.close();
    }
}
