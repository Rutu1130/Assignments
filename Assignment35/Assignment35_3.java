/*
Write a java program which accept N Nnumbers from user and accept one another 
number as NO , return index of last occurrence of that NO

Input :         N: 6
               NO:  66  
        Elements : 85   66  3   66  93  88

Output :  3
*/


import java.util.Scanner;

class Assignment35_3
{

    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int Num = 0;
        int iNo = 0 ;
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
        System.out.println("Enter NO  :");
        iNo = sobj.nextInt();

        iRet = DisplayOcc(Elements,Num,iNo);
        
        if (iRet != -1) 
        {
            System.out.println("Last occurrence of index: " + iRet);
        } else 
        {
            System.out.println(iNo + " is not present in the array.");
        }
        sobj.close();



    }
    public static int DisplayOcc (int []Arr,int iNum ,int iNo)
    {        
        int iCnt = 0;
        int lastIndex = -1;

    
        for ( iCnt = 0; iCnt < iNum; iCnt++) 
        {
            if ((Arr[iCnt] == iNo) )
            {
                lastIndex = iCnt;

            }
        }
        return lastIndex ;     
    }
}
