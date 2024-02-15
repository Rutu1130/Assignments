/* Accept number of rows and number of columns from user and display below patter.

//Input :  iRow =3   iCol = 4
 Output :   1   2   3   4
            5   6   7   8
            9   10  11  12
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0 ;
    int iNo = 1;


    for(i = 1;i <=iRow; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            printf("%d\t",iNo);
            iNo++;
            
        }
        printf("\n");
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
