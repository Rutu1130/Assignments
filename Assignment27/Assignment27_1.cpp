/* Write a program which accept string from user and convert it into lower case.

Input : "Marvellous Multi OS"
Output :  "marvellous Multi os"
*/

#include<iostream>
using namespace std;

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strlwrX(Arr);    

    cout<<"Modified String is :"<<Arr<< endl;  
    return 0;
}