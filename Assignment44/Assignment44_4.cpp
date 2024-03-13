/*
Write a generic program to accept N values from user and return  largest  values
*/


#include <iostream>
using namespace std;

template<class T>
T AddN(T *Arr, int iSize)
{
    T largest = Arr[0];
    for (int i = 0; i < iSize; i++)
    {
        if(Arr[i] > largest)
        {
            largest = Arr[i];
        }
    }
    return largest;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};
    
    int iLargest = AddN(Arr, 5);
    cout << "Largest integer value: " << iLargest << endl;

    float fLargest = AddN(brr, 4);
    cout << "Largest  float value : " << fLargest<< endl;

    return 0;
}
