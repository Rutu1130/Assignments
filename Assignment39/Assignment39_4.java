
/* Write a program which accept one number and position from user and toggle that bit.
return modified number

Input : 10    3
output : 14
*/

import java.util.Scanner;

class Assignment39_4
{
    public static int ToggleBit(int iNo, int iPos)
    {
        if (iPos < 1 || iPos > 32) 
        {
            System.out.println("Invalid position. Position should be between 1 and 32.");
            return iNo;
        }

        int iMask = (1 << (iPos - 1));

        return iNo ^ iMask;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iPos =0;
        int iRet = 0;


        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position: ");
        iPos = sobj.nextInt();

        iRet = ToggleBit(iNo, iPos);

        System.out.println("Modified number : " +iRet);
        sobj.close();
    }
}
