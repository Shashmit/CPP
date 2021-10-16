#include <iostream>
using namespace std;
class Salesperson;
class Sale
{
private:
 int dayOfMonth;
 int amountSale;
 int ID;
public:
 Sale(int date, int amount, int id){
 if((date>0)&&(date<32))
 dayOfMonth=date;
 else
 dayOfMonth=1;
 amountSale=amount>0?amount:0;
 ID=id;
}
 friend void display(Salesperson saler, Sale sale);
};
class Salesperson
{
private:
 string name;
 int ID;
public:
 Salesperson(string Name, int id){
name=Name;
ID=id;
}
 friend void display(Salesperson saler, Sale sale);
};
void display(Salesperson saler, Sale sale)
{
 cout<<"Date of sale: "<<sale.dayOfMonth<<endl;
 cout<<"Amount: "<<sale.amountSale<<endl;
 cout<<"Saler: "<<saler.name<<endl;
}
int main()
{
 Sale data(10,17,10);
 Salesperson saler("Shashmit",101);
 display(saler,data);
 return 0;
}