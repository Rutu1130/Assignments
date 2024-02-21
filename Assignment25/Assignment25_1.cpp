/*Write a program which displays ASCII table . Table contains symbol, Decimal , Hexadecimal and 
Octal representation of every member from 0 to 255

*/

#include<iostream>
using namespace std;

void DisplayASCII()
{
    int iCnt = 0;

    cout<<"---------------------------------------------"<<endl;
    cout<<"------------------ASCII Table-----------------"<<endl;
    cout<<"---------------------------------------------"<<endl;

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        cout << "\t" << iCnt << "\t" << oct << iCnt << "\t" << hex << iCnt << endl;
    }
    cout<<"---------------------------------------------"<<endl;
}
int main()
{
    DisplayASCII();
    return 0;
}