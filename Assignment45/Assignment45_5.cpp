/*
write a generic program to accept N values and reverse the contents.

Input :  10     20  30  10  30  40  10  40  10

Output:  10     40  10  40  30  10  30  20  10
*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    for (int i = 0, j = iSize - 1; i < j; i++, j--)
    {
        // Swap elements at positions i and j
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    cout << "Original Array: ";
    for(int i = 0;i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    Reverse(arr, 9);
    cout << "\nReversed Array: ";
    for(int i = 0;i < 9; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}
