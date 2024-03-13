/*
Write a generic program to accept N values from user and return addition of that values
*/

#include<iostream>
using namespace std;


template<class T>
T AddN(T *Arr, int iSize)
{
    T sum = 0;
    for (int i = 0; i < iSize; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.3, 3.7, 9.8, 8.7};
    
    int iSum = AddN(Arr, 5);
    cout << "Sum of integers: " << iSum << endl;

    float fSum = AddN(brr, 4);
    cout << "Sum of floats: " << fSum << endl;

    return 0;
}
