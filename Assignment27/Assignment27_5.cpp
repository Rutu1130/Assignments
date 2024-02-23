/* Write a program which accept string  from user and count number of  white Spaces.

Input : "Marvellous"
Output: 0

Input : "Marvellous Infosystems"
Output: 1
*/

#include<iostream>
using namespace std;

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str !='\0')
    {
        if (*str == ' ' )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt++;

}

int main()
{
    char arr[20];
    int iRet = 0;
    cout<<"Enter string : "<<endl;
    cin.getline(arr, sizeof(arr));

    iRet = CountWhite(arr);

    cout<<"Number of white Spaces  : "<<iRet<<endl;
    return 0 ;
}