#include<iostream>
using namespace std;

class Person
{
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
int main()
{
Person pobject1 ;
cout<<"No Argument constructor"<<endl;
pobject1.display();
Person pobject2("Shashmit","Kumar","800020");
cout<<"Para constructor"<<endl;
pobject2.display();
return 0;
}