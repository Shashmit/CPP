#include<iostream>
using namespace std;
 
void average(int *a,int numberoftest){
    int sum=0;
     for (int i=0;i<numberoftest;i++) {
        sum += a[i];
       }
       sum = sum/numberoftest;
       cout<<"YOUR TOTAL AVERAGE IS : "<<sum<<endl;
}
 
int main(){
    int numberoftest;
    cout<<"NUMBER OF TEST YOU HAVE GIVEN (1 - 5) : "<<endl;
    cin>>numberoftest;
    int a[numberoftest];
    if(numberoftest<=5 && numberoftest>=1){
    	cout<<"enter all your marks"<<endl;
       for (int i=0;i<numberoftest;i++) {
            cin>>a[i];
       }
       average(a,numberoftest);
    }
    else{
        cout<<"user input invalid : "<<endl;
    }
    return 0;
}
