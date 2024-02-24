/* Write a program which accept string from user and accept one character .
Check whether that character is present in string or not 

Input : Marvellous Multi OS
        e
Output : TRUE

Input :  Marvellous Multi OS
        d
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;  
        }
        str++;
    }

    return FALSE; 
   
}

int main()
{
    char arr[20];
    char cValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter the String : ";
    cin.getline(arr, sizeof(arr));

    cout<<"Enter the Character : ";
    cin>> cValue;

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        cout<<"character is found"<< endl;
    }
    else
    {
        cout<<"character not found"<< endl;
    }
    return 0 ;
}
