/* 
Complete below code snippet by writing definitions of below function

1. SearchLast - Search last occurrence of number
2. EvenCount - Count Even elements 
3. OddCount - Count odd elements 
4. SumAlll()  - sum of all elements 
*/



#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside Construction\n";
        this->size = value;
        this->Arr = new int[size];
    }

    Array(const Array &ref)
    {
        cout << "Inside copy Construction\n";
        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout << "Inside Destruction\n";
        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values\n";

    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Elements are \n";

    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:

        ArrSearch(int no = 10) : Array(no)
        {}
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAlll();
};

int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    int i = size - 1;

    while (i >= 0)
    {
        if (Arr[i] == value)
        {
            return i + 1;
        }
        i--;
    }

    return -1;
}

int ArrSearch::EvenCount()
{
    int evenCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    return evenCount;
}

int ArrSearch::OddCount()
{
    int oddCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int ArrSearch::SumAlll()
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }

    return sum;
}

int main()
{

    cout << "Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);
    cout << "Frequency is " << iRet << "\n";

    iRet = sobj1.SearchFirst(11);
    cout << "First occurrence is: " << iRet << "\n";

    iRet = sobj1.SearchLast(11);
    cout << "Last occurrence is: " << iRet << "\n";

    iRet = sobj1.EvenCount();
    cout << "Even elements count is: " << iRet << "\n";

    iRet = sobj1.OddCount();
    cout << "Odd elements count is: " << iRet << "\n";

    iRet = sobj1.SumAlll();
    cout << "Sum of all elements is: " << iRet << "\n";

    return 0;
}
