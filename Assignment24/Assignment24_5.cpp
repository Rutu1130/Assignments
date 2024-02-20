/*Accept division of student from user and depends on the division display exam
timing . There are 4 divisions in school as A,B,C,D . Exam of division A at 7AM,
B at 8:30AM, C at 9:20 AM and D at 10:30 AM. 
( Application should be case sensitive)

Input : C
Output :  Your exam at 9:20 AM

Input : D
Output :  Your exam at 10:30 AM

*/


#include<iostream>
using namespace std;

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
    case 'A':
        cout<<"Your exam at 7:00 AM"<<endl;
        break;
    case 'B':
        cout<<"Your exam at 8:30 AM"<<endl;
        break;
    case 'C':
        cout<<"Your exam at 9:20 AM"<<endl;
        break;
    case 'D':
        cout<<"Your exam at 10:30 AM"<<endl;
        break;
    default:
        cout<<"Invalid division"<<endl;
        break;
    }

}

int main()
{
    char cValue = '\0';
    

    cout<<"Enter the division : "<<endl;
    cin>>cValue;

    DisplaySchedule(cValue);
    return 0 ;
}