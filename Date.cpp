#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    
    public:
        Date():month(1), day(1), year(2000){}
        Date(int Month, int Day, int Year):month(Month), day(Day), year(Year){}
    void Display() 
    {
    cout << month << ":" << day << ":" << year;
    }
};
int main()
{
    Date date1;
    Date date2(6, 29, 2020);
    cout << "Date value-1: ";
    date1.Display();
    cout<<"\n";
    cout << "Date value -2: ";
    date2.Display();
    cout<<"\n";
    return 0;
}