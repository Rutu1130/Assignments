/*
write a generic program to accept N values and search last occurance of 
any specific value

Input :  10     20  30  10  30  40  10  40  10
Value to search: 40
Output:  8
*/

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    
    for (int i = iSize - 1; i >= 0; i--)
    {
        if (arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[] ={10 , 20 ,30 , 10 , 30 , 40 , 10 , 40 , 10};
    int iRet = SearchLast(arr,9,40);
    if (iRet != -1)
    {
        cout << "Last occurrence of 40 at index: " << iRet << endl;
    }
    else
    {
        cout << "Value not found in the array." << endl;
    }
  
    return 0;
}