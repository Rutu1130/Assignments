/* Accept character from user and check whether it is Alphabet or not
(0 - 9)
input : 7
Output : TRUE
Input : d
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if ((ch >= '0' && ch <= '1'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout<<"Enter the Character : ";
    cin>> cValue;

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is Digit"<< endl;
    }
    else
    {
        cout<<"It is not a Digit"<< endl;
    }
    return 0 ;
}
