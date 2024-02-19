/* Accept number of rows and number of columns from user and display below pattern

Input :  iRows = 4     iCol = 4

output :   
            *   *   *   #
            *   *   #   *
            *   #   *   *
            #   *   *   *
           
*/

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int X, int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
            int i = 0, j = 0;

            for (i = iRow; i >= 1 ; i--)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if (j == i)
                    {
                        cout << "#\t";
                    }
                    else
                    {
                        cout << "*\t";
                    }
                }
                cout << endl; 
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of rows : " << endl;
    cin >> iValue1;

    cout << "Enter number of columns : " << endl;
    cin >> iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);

    pobj->Display();
    
    delete pobj;
    
    return 0;
}


