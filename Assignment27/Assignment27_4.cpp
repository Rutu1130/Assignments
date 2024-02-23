/* Write a program which accept string from user and display only digits from that string.

Input : Marve89llous121 
Output :  89121
*/

#include<iostream>
using namespace std;

void DisplayDigits(const char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            cout<<*str ;
        } 
            
        str++;
    }
    cout<<endl;
}

int main()
{
    char Arr[20];

    cout<<"Enter the string : "<<endl;
    cin.getline(Arr, sizeof(Arr));

    cout<<"Modified String is :"<< endl;  
    DisplayDigits(Arr);    
    return 0;
}