#include <iostream>
using namespace std;
void pprint(int payment,int final_payment){
      cout<<"Your Gross Pay is : "<<payment<<endl;   
      cout<<"Your Net Pay is :"<<final_payment<<endl;
}
int NetPay(int payment,int taxed){
    int last_cost;
    last_cost = payment-taxed;
    return last_cost;
}
int GrossPay_calculator(int payment){
    int Witholding;
    if(payment>1000){   
        Witholding=(payment*28)/100;  
    }
    else if(1000>payment>600)    {       
        Witholding=(payment*21)/100;    
         
    }    
    else {        
        Witholding=(payment*10)/100;    
    }
    return Witholding;
}
 
int calculator(int NO_HOURS,int Wage){
    int GrossPay;
    if(NO_HOURS >= 40){
        GrossPay=40*Wage+(NO_HOURS-40)*1.5*Wage;
    }
    else{
        GrossPay=NO_HOURS*Wage;
    }
    return GrossPay;
}
 
int main(){  
    int NO_HOURS,Wage;
    cout<<"ENTER YOUR TOTAL HOURS WORKED : "<<endl;
    cin>>NO_HOURS;
    cout<<"ENTER YOU NUMBER OF HOURS WORKED : "<<endl;
    cin>>Wage;
    int payment =  calculator(NO_HOURS,Wage);
    int taxed = GrossPay_calculator(payment);
    int final_payment = NetPay(payment,taxed);
    pprint(payment,final_payment);
    return 0;
}