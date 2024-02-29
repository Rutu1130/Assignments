/*
Write a java program which accept Nnumbers from user and display all such elements 
which are divisible by 3 and 5

Input :         N: 6
        Elements : 85   66  3   80  93  88

Output :      80
*/


import java.util.Scanner;

class Assignment33_4
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Value  N : ");
        int N  = sobj.nextInt();

        int[] Elements = new int[N];

        System.out.println("Enter number of elemets :");
        for (int i = 0; i < N; i++) 
        {
            
            Elements[i] = sobj.nextInt();
        }
        System.out.println("Elements divisible by 3  and 5: " );
        int iCnt = 0;
    
        for ( iCnt = 0; iCnt < N; iCnt++) 
        {
            if ((Elements[iCnt] % 3 == 0) && ( Elements[iCnt] % 5 == 0))
            {
                System.out.println(Elements[iCnt]+" ");
            }
        }
   
        sobj.close();
    }
}
