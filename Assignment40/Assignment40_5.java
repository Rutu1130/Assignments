/*
Write a progra which accept one  number from user and range of positions from user.\
Toggle all bits from that range

Input :   897       9       13
 Toggle all bits from position 9 to 13 of input number i.e 897
*/

import java.util.*;

class Assignment40_5
{
    public static int  ToggleBitRange(int iNo,int iStart,int iEnd)
    {
        int iMask = 0;
    
        iMask = ((1 << (iEnd - iStart + 1)) - 1) << (iStart - 1);
        return iNo ^ iMask;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iStart = 0;
        int iEnd = 0;
        int iRet = 0;
        System.out.println("Enter the First number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the Starting position  : ");
        iStart = sobj.nextInt();
        System.out.println("Enter the ending position : ");
        iEnd = sobj.nextInt();

        iRet = ToggleBitRange(iNo, iStart, iEnd);
        System.out.println("Modified number after toggling bits in the range: " +iRet);
   
        sobj.close();
    }
}