/* Write a program which accept string from user and accept one character .
Return index of last occurrance  of that character..

Input : Marvellous Multi OS
         M
Output : 11

Input :  Marvellous Multi OS
         W
Output : -1
*/

#include<iostream>
using namespace std;


int LastChar(char *str, char ch)
{
    int iCnt =0;
    int index = -1; 
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if (str[iCnt] == ch)
        {
            index = iCnt;
             
        }      
    }
    return index; 
   
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

    iRet = LastChar(arr, cValue);
    if (iRet != -1)
    {
        cout << "Index of the Last occurrence of character " << iRet << endl;
    }
    else
    {
        cout << "Character not found in the string." << endl;
    }
   
    return 0 ;
}
