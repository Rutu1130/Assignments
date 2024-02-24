/* Write a program which accept string from user and accept one character .
Return Frequency of that character..

Input : Marvellous Multi OS
         M
Output : 2

Input :  Marvellous Multi OS
         W
Output : 0
*/

#include<iostream>
using namespace std;


int CountChar(char *str, char ch)
{
    int iCnt =0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;  
        }
        str++;
    }

    return iCnt; 
   
}

int main()
{
    char arr[20];
    char cValue = 0;
    int iRet = 0;
   
    cout<<"Enter the String : ";
    cin.getline(arr, sizeof(arr));

    cout<<"Enter the Character : ";
    cin>> cValue;

    iRet = CountChar(arr, cValue);

    cout<<"Frequency of character : "<<iRet<<endl;

   
    return 0 ;
}
