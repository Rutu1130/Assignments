/*
Write a java program which accept Nnumbers from user and return 
multiplication of all digits

Input :    2395
Output :    270
Input :    1018
Output :    8
*/


import java.util.Scanner;

class Assignment34_4
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int Number  = sobj.nextInt();

        int iRet = Multiplication(Number);

        System.out.println("Multiplication of all digits: " + iRet);
        sobj.close();
    } 

    public static int Multiplication(int iNo)   
    {
        int iMul = 1;
        int iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iMul *= iDigit; 
            iNo/=10;

        }
        return iMul;
    }
}
