/*
Write a java program which accept Nnumbers from user and display all such elements 
which are multiples of 11

Input :         N: 6
        Elements : 85   66  3   80  93  88

Output :      66    88  
*/


import java.util.Scanner;

class Assignment33_5
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
        System.out.println("Elements multiples of 11: " );
        int iCnt = 0;
    
        for ( iCnt = 0; iCnt < N; iCnt++) 
        {
            if ((Elements[iCnt] % 11 == 0))
            {
                System.out.println(Elements[iCnt]+" ");
            }
        }
   
        sobj.close();
    }
}
