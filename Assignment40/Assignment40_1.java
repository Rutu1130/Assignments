/*
Write a progra which accept one  number from user and count number of 
ON (1) bits in it   without using  % and / operator.

Input :  11
Output : 3
*/

import java.util.*;

class Assignment40_1
{
    public static int CountOne(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt += iNo & 1;
            iNo = iNo >>> 1;
        }
        return iCnt;

    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iRet = CountOne(iNo);

        System.out.println("Number of On bits : " +iRet);
        sobj.close();
    }
}