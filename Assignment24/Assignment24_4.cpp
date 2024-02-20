/* Accept character from user and check whether it is Small or not
(a - z)
input : d
Output : TRUE
Input : F
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if ((ch >= 'a' && ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is Small character"<< endl;
    }
    else
    {
        cout<<"It is not a small character"<< endl;
    }
    return 0 ;
}
