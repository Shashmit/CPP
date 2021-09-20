#include<iostream>
using namespace std;

typedef struct{
    int invoice_number;
    double amount_of_sale;
    double amount_of_saletax;
}Purchase;

int main(){
    Purchase standard;
    cout<<"ENTER YOUR INVOICE NUMBER : "<<endl;
    cin>>standard.invoice_number;
    if(1000<standard.invoice_number<8000&&standard.invoice_number>0){
        cout<<"ENTER YOUR SALE AMOUNT"<<endl;
        cin>>standard.amount_of_sale;
        cout<<"TOTAL AMOUNT AFTER TAX"<<endl;
        standard.amount_of_saletax = (standard.amount_of_sale*5)/100;
    }
    else{
        cout<<"Enter a valid Invoice Number"<<endl;
    }
    cout<<"Your Invoice Number : "<<standard.invoice_number<<"\n"<<"Your Sale Amount : "<<standard.amount_of_sale<<"\n"<<"Your sale tax is : "<<standard.amount_of_saletax<<endl;
    return 0;
}