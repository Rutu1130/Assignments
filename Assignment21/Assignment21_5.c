/* Accept nuber of rows and number of columns from user and display below pattern.
iRow= 4
iCol = 4

   1    2   3   4   
   1    *   *   4   
   1    *   *   4
   1    2   3   4
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0 ;

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            if((j == iCol || i == iRow || j == 1 || i == 1))        
            {
                printf("%d\t",j);
            }
        
            else
            {
                printf("*\t");

            }
            
        }
        printf("\n\n");
    }


}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0 ;

}
