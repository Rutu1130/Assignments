/* Write a program which accept string  from user and count number of SMALL characters.

Input : "Marvellous"
Output: 9
*/

#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str !='\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    cout<<"Number of Small Characters : "<<iRet<<endl;
    return 0 ;
}