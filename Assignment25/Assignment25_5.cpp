/* Accept character from user and display its ASCII value in decimal, octal and
hexadecimal format .

Input : A
Output : Decimal     : 65
         Octal       :0101
         Hexadecimal : 0X41
*/



#include<iostream>
using namespace std;

void Display(char ch)
{
    cout<<"ASCII value of the character in DECIMAL is :"<<int (ch)<<endl;
    cout<<"ASCII value of the character in OCTAL is : "<<oct<<int (ch)<<endl;
    cout<<"ASCII value of the character in HEXADECIMAL is :"<<hex<< int (ch)<<endl;
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    Display(cValue);
    return 0;
}
