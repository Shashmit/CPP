#include <iostream>
using namespace std;
int main()
{ 
    double NO_HOURS,Wage,GrossPay,Witholding,NetPay;
    cout<<"Enter Number of Hours Worked :"<<endl;
    cin>>NO_HOURS;
     cout<<"Enter Your Hourly Wage: "<<endl;
    cin>>Wage;
    if(NO_HOURS>=40)
    {
        GrossPay=40*Wage+(NO_HOURS-40)*1.5*Wage;
    }
    else
    {
        GrossPay=NO_HOURS*Wage;
    }
    if(GrossPay>1000)
    {
        Witholding=(GrossPay*28)/100;
    }
    else if(1000>GrossPay>600)
    {
        Witholding=(GrossPay*21)/100;
    }
    else
    {
        Witholding=(GrossPay*10)/100;
        
    }
    NetPay=GrossPay-Witholding;
    cout<<"Your Gross Pay is : "<<GrossPay<<endl;
    cout<<"Your Net Pay is :"<<NetPay<<endl;
    return 0;
}