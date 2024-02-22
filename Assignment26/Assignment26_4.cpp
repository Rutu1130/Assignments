/* Write a program which accept string  from user and check whether it contains 
vowels init or not.

Input : Marvellous
Output : TRUE

Input : xyz
Output : FALSE
*/

#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )
        {
            return TRUE;
        }
        str++;

    }
    return FALSE;
   
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    cout<<"Enter the String : ";
    cin.getline(arr, sizeof(arr));

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        cout<<"It Contains Vowel"<< endl;
    }
    else
    {
        cout<<"There is no  Vowel"<< endl;
    }
    return 0 ;
}
