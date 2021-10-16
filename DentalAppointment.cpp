#include<iostream>
using namespace std;

 class Person
{
  private:
    string lastName;
    string firstName;
    string zipCode;
  public:
    Person()
    {
    lastName="x";
    firstName="x";
    zipCode="x";
    }
    Person(string lastName,string firstName,string zipCode)
    {
    this->lastName=lastName;
    this->firstName=firstName;
    this->zipCode=zipCode;
    }
     void display()
    {
    cout<<"\n\tPerson Details"<<endl;
    cout<<"\tLast Name\t:"<<lastName<<endl;
    cout<<"\tFirst Name\t:"<<firstName<<endl;
    cout<<"\tZip code\t:"<<zipCode<<endl;
    }
};
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
    cout << "\tDay:Month:year : "<<day << ":" << month << ":" << year;
    }
};
class Time
{
   int hours;
   int minutes;
public:
   Time(int hours, int mins){
    const int MAXMINS = 59;
   const int MAXHOURS = 23;
   if(hours > MAXHOURS)
      this->hours = MAXHOURS;
   else
      this->hours = hours;
   if(mins > MAXMINS)
      minutes = MAXMINS;
   else
      minutes = mins;
}
void add(int mins)
{
   const int MINSINHOUR = 60;
   const int MAXHOURS = 23;
   minutes += mins;
   if(minutes >= MINSINHOUR)
   {
      int extraMinutes = minutes % MINSINHOUR;
      hours += minutes / MINSINHOUR;
      minutes = extraMinutes;
   }
   if (hours > MAXHOURS)
   {
      hours -= MAXHOURS;
   }
}
void display()
{
   cout << "\n\tTime is     : " << hours << ":";
   if(minutes >= 10)
      cout << minutes << endl;
   else
      cout << "0" << minutes << endl;
}
}; 
int main(){
    Person pobject1("Shashmit","Kumar","800020");
    pobject1.display();
    Date date1(6, 29, 2020);
    date1.Display();
    Time time1(14,23);
    time1.display();
    return 0;
}