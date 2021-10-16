#include <iostream>
using namespace std;
    
typedef struct{    
   string DogName;
}Dog;
 
typedef struct{    
    string CatName;
}Cat;
 
void speak(Dog p){
    cout<<"YOUR  NAME IS : "<<p.DogName<<endl;
   
}
void speak(Cat s){
     cout<<"YOUR CAT NAME IS : "<<s.CatName<<endl;
}
int main(){
    int input; 
    Cat s;
    Dog p;
    cout<<"ENTER YOUR DOG NAME AND CAT NAME : "<<endl;
    cin>>p.DogName>>s.CatName;
    cout<<"Enter the number (1 : 2) "<<endl; 
    cout<<"Speak Dog -- ( 1 ) \n"<<"Speak Cat --( 2 )"<<endl; 
    cin>>input; 
    switch (input){ 
        case 1: 
            speak(p);
            break; 
        case 2: 
            speak(s); 
            break; 
        default: 
            cout<<"Wrong Input !!"<<endl;		 
    } 
    return 0;
}