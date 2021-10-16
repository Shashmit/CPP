#include <iostream>
using namespace std;
    
typedef struct{    
    double  collarSize;    
    double  sleeveLength;
}Shirt;
 
typedef struct{    
    double  waistSize;    
    double  inSeam;
}Pant;
 
void displayClothingFacts(Shirt s){
    cout<<"your shirt collarSize and sleeveLength is : \n"<<s.collarSize<<" and "<<s.sleeveLength<<endl;
}
void displayClothingFacts(Pant p){
     cout<<"your shirt collarSize and sleeveLength is : \n"<<p.waistSize<<" and "<<p.inSeam<<endl;
}
int main(){
    int input; 
    Shirt s;
    Pant p;
    cout<<"Enter your shirt collarSize and sleeveLength : "<<endl;
    cin>>s.collarSize>>s.sleeveLength;
    cout<<"Enter Your pant waistSize and inSeam : "<<endl;
    cin>>p.waistSize>>p.inSeam;
    cout<<"Enter the number (1 : 2) "<<endl; 
    cout<<"To Display the size of Shirt -- ( 1 ) \n"<<"To Display the size of Pant --( 2 )"<<endl; 
    cin>>input; 
    switch (input){ 
        case 1: 
            displayClothingFacts(s);
            break; 
        case 2: 
            displayClothingFacts(p); 
            break; 
        default: 
            cout<<"Wrong Input !!"<<endl;		 
    } 
    return 0;
}