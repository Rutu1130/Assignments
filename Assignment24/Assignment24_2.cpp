/* Accept character from user and check whether it is Alphabet or not
(A - Z )
input : D
Output : TRUE
Input : d
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is Capital  character"<< endl;
    }
    else
    {
        cout<<"It is not a Capital character"<< endl;
    }
    return 0 ;
}
