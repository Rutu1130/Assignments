/*
Write a java program which accept Nnumbers from user and return the count of even digits

Input :    2395
Output :    1
Input :    1018
Output :    2
*/


import java.util.Scanner;

class Assignment34_1
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        int Number  = sobj.nextInt();

        int Count = CountEvenDigits(Number);

        System.out.println("Count of even digits: " + Count);
        sobj.close();
    } 

    public static int CountEvenDigits(int iNo)   
    {
        int iCnt = 0;
        int iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCnt++;
            } 
            iNo/=10;

        }
        return iCnt;
    }
}
