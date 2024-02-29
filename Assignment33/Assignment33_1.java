
/*
Write a java program which accept Nnumbers from user and return 
difference between summation of even elements and summation of odd elements.

Input :         N: 6
        Elements : 85   66  3   80  93  88

Output :  53   (234-181)
*/


import java.util.Scanner;

class Assignment33_5
{
    public static int FindDifference(int[] arr) 
    {
        int iCnt = 0;
        int iOdd = 0;
        int iEven = 0;

        for ( iCnt = 0; iCnt < arr.length; iCnt++) 
        {
            if ((arr[iCnt] % 2 == 0) )
            {
                iEven += arr[iCnt];
            }

            else if ((arr[iCnt] % 2 != 0)) 
            {
                iOdd += arr[iCnt];
            }
        }
        return   iEven - iOdd;
       
    }

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter the Value  N : ");
        int N  = sobj.nextInt();

        int[] Elements = new int[N];

        System.out.println("Enter number of elemets :");
        for (int i = 0; i < N; i++) 
        {
            
            Elements[i] = sobj.nextInt();;
        }
        iRet = FindDifference(Elements);

        System.out.println("Difference between summation of even and odd elements: " + iRet);
    }
}
