
/* Write a program which accept one number and position from user and 
toggle contents of first and last niddle of the number..
return modified number.(niddle is group of four bits)

*/

import java.util.Scanner;

class Assignment39_5
{
    public static int ToggleBit(int iNo)
    {    
        int iMask = 0xF000000F; 
        return iNo ^ iMask;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter a number: ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);

        System.out.println("Modified number : " +iRet);
        sobj.close();
    }
}
