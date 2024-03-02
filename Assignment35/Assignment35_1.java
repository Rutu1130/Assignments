/*
Write a java program which accept N Nnumbers from user and accept one another 
number as NO , check whether NO is present or Not 

Input :         N: 6
               NO:  88  
        Elements : 85   66  3   80  93  88

Output :  TRUE
*/


import java.util.Scanner;

class Assignment35_1
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int Num = 0;
        int iNo = 0 ;

        System.out.println("Enter the Value  N : ");
        Num = sobj.nextInt();

        int[] Elements = new int[Num];

        int iCnt = 0;
        System.out.println("Enter number of elemets :");
        for (iCnt = 0; iCnt < Num; iCnt++) 
        {
            
            Elements[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter NO  :");
        iNo = sobj.nextInt();

        boolean bRet = Display(Elements,Num,iNo);

        if(bRet == true)
        {
            System.out.println("NO is present : ");
        }
        else
        {
            System.out.println("NO is not present : ");

        }
        sobj.close();



    }
    public static boolean Display(int []Arr,int iNum ,int iNo)
    {    
    
        int iCnt = 0;
    
        for ( iCnt = 0; iCnt < iNum; iCnt++) 
        {
            if ((Arr[iCnt] == iNo) )
            {
                return true;

            }
        }
        return false;
   
        
    }
}
