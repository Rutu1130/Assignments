/* Accept number of rows and number of columns from user and display below patter.

//Input :  iRow =4   iCol = 5
 Output :  2    4   6   8   10
           1    3   5   7   9 
           2    4   6   8   10
           1    3   5   7   9 
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0 ;
    int iNo = 2;
  
    for(i = 1;i <=iRow; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            
            printf("%d\t",iNo);
            iNo += 2;   
        }            
        printf("\n");
        if (iNo > 10)
            iNo = 1;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and  Columns  : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0 ;

}
