#include <iostream>
using namespace std;
class Customer_data;
class Cities
{
private:
 int Zipcode;
 string city;
 string state;
public:
 Cities(int data, string City, string State){
     Zipcode = data;
     city = City;
     state = State;
 }
 friend void display(Customer_data saler, Cities sale);
};
class Customer_data
{
private:
 int ID;
public:
 Customer_data(int id){
    ID=id; 
 }
 friend void display(Customer_data saler, Cities sale);
};
void display(Customer_data saler, Cities sale)
{
 cout<<"Zipcode "<<sale.Zipcode<<endl;
 cout<<"City: "<<sale.city<<endl;
 cout<<"State: "<<sale.state<<endl;
 cout<<"ID: "<<saler.ID<<endl;
}
int main()
{
 Cities a(800020,"Patna","Bihar");
 Customer_data saler(123);
 display(saler,a);
 return 0;
}