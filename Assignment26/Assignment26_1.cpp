/* Write a program which accept string  from user and count number of capital characters.

Input : "Marvellous Multi OS"
Output: 4
*/

#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int iCnt = 0;

    

    while(*str !='\0')
    {
        if (*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    cout<<"Number of Capital Characters : "<<iRet<<endl;
    return 0 ;
}