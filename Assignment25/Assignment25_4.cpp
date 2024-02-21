/* Accept character from user and check whether it is special symbol or not
(!,@,#,$,%,^,&,*)

Input : %
Output : TRUE

Input : D
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
   switch (ch)
    {
    case '!':
    case '@':
    case '#':
    case '$':
    case '%':
    case '^':
    case '&':
    case '*':
        return TRUE;
    default:
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout<<"Enter the Character : ";
    cin>> cValue;

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is Special character"<< endl;
    }
    else
    {
        cout<<"It is not a Special character"<< endl;
    }
    return 0 ;
}
