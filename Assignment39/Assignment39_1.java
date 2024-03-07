
/* Write a program which accept one number and position from user and check whether bit
at that position is on off . If bit is one return True otherwise return False

Input : 10    2
output : True
*/

import java.util.Scanner;

class Assignment39_1
{
    public static boolean CheckBit(int iNo, int iPos)
    {
        if (iPos < 1 || iPos > 32) 
        
        {
            System.out.println("Invalid position. Position should be between 1 and 32.");
            return false;
        }

        int iMask = 1 << (iPos - 1);

        return (iNo & iMask) != 0;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iPos =0;
        boolean bRet;


        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position: ");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo, iPos);

        if (bRet == true) 
        {
            System.out.println("True");
        } 
        else 
        {
            System.out.println("False");
        }

        sobj.close();
    }
}
