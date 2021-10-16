#include <iostream>
using namespace std;
    
int calling_second(){
    string movie_name;
    std::cout << "Enter your movie name : " << std::endl;
    cin>>movie_name;
    int length = 90 ;
    cout<<"YOUR MOVIE NAME IS "<<movie_name<<endl;;
    cout<<"TOTAL DURATION IS : ";
    cout<<length<<endl;
    return 0;
}
 
int calling(){
    string movie_name;
    cout << "Enter your movie name : " << endl;
    cin>>movie_name;
    int length;
    cout<<"Enter you movie length "<<endl;
    cin>>length;
    cout<<"YOUR MOVIE NAME IS "<<movie_name<<endl;;
    cout<<"TOTAL DURATION IS : ";
    cout<<length<<endl;
    return 0;
}
    
int main() {
int input;
cout<<"Enter the number (1 : 2) "<<endl;
cout<<"Only movie name -- ( 1 ) \n"<<"Movie name with duration in min --( 2 )"<<endl;
cin>>input;
switch (input){
case 1:
calling_second();
break;
case 2:
calling();
break;
default:
cout<<"Wrong Input !!"<<endl;		
}
return 0;
}