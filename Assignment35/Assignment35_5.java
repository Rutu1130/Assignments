/*
Write a java program which accept N Nnumbers from user and  
return product of all odd elements

Input :         N: 6  
        Elements : 15   66  3   70  10  88  

Output :  45
*/


import java.util.Scanner;

class Assignment35_5
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int Num = 0;
        int iRet = 0;

        System.out.println("Enter the Value  N : ");
        Num = sobj.nextInt();

        int[] Elements = new int[Num];

        int iCnt = 0;
        System.out.println("Enter number of elemets :");
        for (iCnt = 0; iCnt < Num; iCnt++) 
        {
            
            Elements[iCnt] = sobj.nextInt();
        }

        iRet = Display(Elements,Num);
        
        System.out.println("Product of all odd elements: " + iRet);
        
        sobj.close();
    }
    public static int Display (int []Arr,int iNum )
    {     
        int iMul = 1;  
        int iCnt = 0;
    
        for ( iCnt = 0; iCnt < iNum; iCnt++) 
        {
            if ((Arr[iCnt] % 2 != 0) )
            {
                iMul *= Arr[iCnt];

            }
        }
        return iMul ;     
    }
}
