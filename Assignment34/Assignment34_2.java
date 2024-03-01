/*
Write a java program which accept Nnumbers from user and return the count of odd digits

Input :    2395
Output :    3
Input :    1018
Output :    2
*/


import java.util.Scanner;

class Assignment34_2
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int Number  = sobj.nextInt();

        int Count = CountOddDigits(Number);

        System.out.println("Count of odd digits: " + Count);
        sobj.close();
    } 

    public static int CountOddDigits(int iNo)   
    {
        int iCnt = 0;
        int iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            } 
            iNo/=10;

        }
        return iCnt;
    }
}
