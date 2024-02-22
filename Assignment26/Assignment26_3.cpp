/* Write a program which accept string  from user and return difference between frequency of 
small characters and frequency of capital characters.

Input : "Marvellous"
Output: 6     (8-2)
*/

#include<iostream>
using namespace std;

int Difference(char *str)
{
    int iCntSmall = 0 , iCntCapital = 0 ;
    while(*str !='\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        if (*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;
        }
        str++;
    }
    return  iCntSmall - iCntCapital;

}

int main()
{
    char arr[20];
    int iRet = 0;
    cout<<"Enter string : "<<endl;
    cin.getline(arr, sizeof(arr));

    iRet = Difference(arr);

    cout<<"Number of Capital Characters : "<<iRet<<endl;
    return 0 ;
}