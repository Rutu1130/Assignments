/* Write a program which accept string  from user and display it in reverse order.

Input : "Marvellous"
Output: "SuollevraM"
*/

#include<iostream>
using namespace std;

void Reverse(char *str)
{
    int iCnt = 0;
    int iLen = 0;
    while(str[iLen] !='\0')
    {
       iLen++;
    }
    for(iCnt = iLen-1; iCnt>=0; iCnt--)
    {
        cout<<str[iCnt];
    }
    cout<<endl;

}

int main()
{
    char arr[20];
   
    cout<<"Enter string : "<<endl;
    cin.getline(arr, sizeof(arr));

    Reverse(arr);
    return 0 ;
}