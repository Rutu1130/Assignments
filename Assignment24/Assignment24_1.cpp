/* Accept character from user and check whether it is Alphabet or not
(A - Z ,a - z)
input : d
Output : TRUE
Input : #
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is  character"<< endl;
    }
    else
    {
        cout<<"It is not a character"<< endl;
    }
    return 0 ;
}
