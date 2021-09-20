#include<iostream>
#include <iomanip>
using namespace std;
typedef struct 
{
    int Sr;
    int Item_code;
    int quantity;
    double Price;
    double Amount;

}input;
int main(){
    input standard;
    cout<<"Enter the serial No : "<<endl;
    cin>>standard.Sr;
    cout<<"Enter the ITEM CODE : "<<endl;
    cin>>standard.Item_code;
    cout<<"Enter the Quantity : "<<endl;
    cin>>standard.quantity;
    cout<<"Enter the Price : "<<endl;
    cin>>standard.Price;
    standard.Amount= standard.Price*standard.quantity;
    cout.precision(3);
    cout<<"Sr.no.\t"<<"\tItem code\t"<<"\tQuantity\t"<<"\tPrice\t"<<"\tAmount"<<endl; 
    cout<<"=====\t"<<"\t=========\t"<<"\t========\t"<<"\t======\t"<<"\t======"<<endl;
    cout<<standard.Sr<<"\t\t"<<standard.Item_code<<"\t\t\t"<<standard.quantity<<"\t\t\t"<<standard.Price<<"\t\t"<<fixed<<standard.Amount<<endl;
    return 0;
}

