/*
Write a java program which accept Nnumbers from user and return the count of digits
in between 3 and 7

Input :    2395
Output :    1
Input :    1018
Output :    0
*/


import java.util.Scanner;

class Assignment34_3
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int Number  = sobj.nextInt();

        int Count = CountDigits(Number);

        System.out.println("Count of digits between 3 and 7: " + Count);
        sobj.close();
    } 

    public static int CountDigits(int iNo)   
    {
        int iCnt = 0;
        int iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit >= 3 && iDigit <= 7)
            {
                iCnt++;
            } 
            iNo/=10;

        }
        return iCnt;
    }
}
