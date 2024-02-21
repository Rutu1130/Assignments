/*Accept character from user . If character is small display its corresponding capital ,
 and if it small then display its corresponding capital character . 
 In other cases display as it is.

 Input : Q
 Output : q
  Input : s
 Output : S
  Input : $
 Output : $
*/

#include<iostream>
using namespace std;

char Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    cRet = Display(cValue);

    cout<<"Converted capital letter is : "<< cRet<< endl;
    return 0;
}
