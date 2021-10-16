#include <iostream>
using namespace std;
 
class Customer{
    private:
     string first;
     string last;
     int ID_number;
     int credit;
    public:
    void setinformation(string first_name,string last_name,int ID,int credit_score){
        first=first_name;
        last=last_name;
        ID_number=ID;
        credit=credit_score;
    }
    void printt(){
        cout<<"Customer name : "<<first<<" "<<last<<endl;
        cout<<"ID NUMBER : "<<ID_number<<endl;
        cout<<"Credit limit : "<<credit<<endl;
    }
};
 
 
int main() {
Customer standard;
int ID,credit_score;
string first_name,last_name;
cout<<"Enter ID number : "<<endl;
cin >> ID;
    cout<<"Enter credit score : "<<endl;
    cin>>credit_score;
    if(credit_score<10000){
        cout<<"Enter your first and last name : "<<endl;
        cin>>first_name>>last_name;
        standard.setinformation(first_name,last_name,ID,credit_score);
        standard.printt();
    }
    else{
        cout<<"Your are not allowed : "<<endl;
    }
return 0;
}