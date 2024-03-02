/*
Write a java program which accept N Nnumbers from user and accept Range , Display all
elements from that range

Input :         N: 6
            Start:  66  
            End  :  90
        Elements : 85   66  3   76  93  88

Output : 85   66    76    88  
*/


import java.util.Scanner;

class Assignment35_4
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int Num = 0;
        int iNo = 0 ;
        int startRange = 0;
        int endRange = 0;

        System.out.println("Enter the Value  N : ");
        Num = sobj.nextInt();

        int[] Elements = new int[Num];

        int iCnt = 0;
        System.out.println("Enter number of elemets :");
        for (iCnt = 0; iCnt < Num; iCnt++) 
        {
            
            Elements[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter Start Range :");
        startRange = sobj.nextInt();

        System.out.println("Enter End Range :");
        endRange = sobj.nextInt();

        Display(Elements, Num, startRange, endRange);
        sobj.close();



    }
    public static int Display(int []Arr,int iNum , int iStart, int iEnd)
    {        
        System.out.println("Elements in the range :");
        int iCnt;

        for (iCnt = 0; iCnt < iNum; iCnt++) 
        {
            if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd) {
                System.out.print(Arr[iCnt] + " ");
            }
        }
        System.out.println(); 
        return iCnt;   
    }
}
