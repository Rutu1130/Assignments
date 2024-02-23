/* Write a program which accept string from user and toggle the  case.

Input : Marvellous Multi os
Output :  "mARVELLOUS mULTI OS"
*/

#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        } 
        else
        {
            *str = *str + 32;
        }     
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr, sizeof(Arr));

    strtoggleX(Arr);    

    cout<<"Modified String is :"<<Arr<< endl;  
    return 0;
}