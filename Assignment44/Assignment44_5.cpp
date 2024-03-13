/*
Write a generic program to accept N values from user and return smallest values
*/


#include <iostream>
using namespace std;

template<class T>
T AddN(T *Arr, int iSize)
{
    T smallest = Arr[0];
    for (int i = 0; i < iSize; i++)
    {
        if(Arr[i] < smallest)
        {
            smallest= Arr[i];
        }
    }
    return smallest;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};
    
    int ismallest = AddN(Arr, 5);
    cout << "smallest integer value: " << ismallest << endl;

    float fsmallest = AddN(brr, 4);
    cout << "smallest  float value : " << fsmallest<< endl;

    return 0;
}
