/*
Write a progra which accept two  number from user and display position of common ON 
bits from that two numbers.
Input :  10     15      (1010   1111)
Output : 2      4
*/

import java.util.*;

class Assignment40_2
{
    public static void CommonBits(int iNo1, int iNo2)
    {
        int iMask = 1;
        int iPos = 1;

        while (iNo1 != 0 || iNo2 != 0) 
        {
            int iBit1 = iNo1 & 1;
            int iBit2 = iNo2 & 1;

            if (iBit1 == 1 && iBit2 == 1) 
            {
                System.out.print(iPos + " ");
            }

            iNo1 = iNo1 >>> 1;
            iNo2 = iNo2 >>> 1;
            iPos++;
        }

        System.out.println();
        

    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;
        System.out.println("Enter the First number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        iNo2 = sobj.nextInt();

        System.out.println("Number of On bits : " );
        CommonBits(iNo1, iNo2);   
        sobj.close();
    }
}