/* Write a program which accept string from user reverse that string in place

Input : abcd
Output : dcba

Input :  abba        
Output : abba
*/

#include<iostream>
using namespace std;


void StrRevX(char *str)
{
    
    int iLen = 0; 
   
    while (str[iLen] != '\0')
    {
        iLen++;
    }
    int iStart = 0;
    int iEnd = iLen - 1;
    
    while(iStart < iEnd)
    {
        char temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;   

        iStart++;
        iEnd--;
    }
   
}

int main()
{
    char arr[20];
   
   
    cout<<"Enter the String : ";
    cin.getline(arr, sizeof(arr));

    StrRevX(arr);
    cout<<"Modified string is :"<<arr<<endl;
    return 0 ;
}
