/* Accept character from user . If it is capital then display all the characters from the
input characters till Z. If input character is small then print all the chracters in reverse
oreder till a. In other cases return directly

Input : Q
 Output : Q     R   S   T   U    V      W   X   Y   Z
  Input : m
 Output : m     l   k   j   i   h   g   f   e   d   c   b   a
  Input : 9
 Output : 
*/

#include<iostream>
using namespace std;

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        for (char i = ch; i <= 'Z'; ++i)
        {
            cout << i << "\t";
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (char i = ch; i >= 'a'; --i)
        {
            cout << i << "\t";
        }

    }
    else
    {
        
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the character : "<<endl;
    cin>>cValue;

    Display(cValue);
    return 0;
}
