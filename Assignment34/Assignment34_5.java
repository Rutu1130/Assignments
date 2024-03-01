/*
Write a java program which accept Nnumbers from user and return 
difference between summation of even digits and summation of odd digits 

Input :    2395
Output :    -15 (2 -17)
Input :    1018
Output :    6 (8 - 2)
*/


import java.util.Scanner;

class Assignment34_5
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int Number  = sobj.nextInt();

        int iRet = Difference(Number);

        System.out.println("Difference between summation of even and odd digits: " + iRet);
        sobj.close();
    } 

    public static int Difference(int iNo)   
    {
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;

        while (iNo != 0) {
            iDigit = iNo % 10;
            if (iDigit % 2 == 0) 
            {
                iEven += iDigit;
            } else 
            {
                iOdd += iDigit;
            }
            iNo /= 10;
        }

        return  iEven - iOdd;
    }
}
