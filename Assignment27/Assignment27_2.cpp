/* Write a program which accept string from user and convert it into Upper case.

Input : "marvellous Multi os"
Output :  "MARVELLOUS MULTI OS"
*/

#include<iostream>
using namespace std;

void struprX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }      
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr, sizeof(Arr));

    struprX(Arr);    

    cout<<"Modified String is :"<<Arr<< endl;  
    return 0;
}