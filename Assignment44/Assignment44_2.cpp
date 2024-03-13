
/*
Write a generic program to find largest number from three numbers
*/

#include<iostream>
using namespace std;

template <class T>

T FindLargest(T no1, T no2,T no3)
{
    T largest = no1;

    if(no2 > largest)
    {
        largest = no2;
    }
    if(no3 > largest)
    {
        largest = no3;
    }
    return largest;
}

int main()
{
    int ino1= 0, ino2 = 0, ino3= 0;
    int iRet = 0;

    cout << "Enter three numbers: ";
    cin >> ino1 >> ino2 >> ino3;

    iRet = FindLargest(ino1,ino2,ino3);
    cout<<"Largest number is: "<<iRet<<endl;
  
    return 0;
}
