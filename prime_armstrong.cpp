#include<iostream>
#include<math.h>
using namespace std;
void prime_number(int number){
int i,flag=0;
  for (i = 2; i <= number / 2; ++i) {
    if (number % i == 0) {
      flag = 1;
      break;
    }
    else{
        break;
    }
  }
    if (flag == 0)
       cout<<number<<" is a prime number"<<endl;
    else
      cout<<number<<" is not a prime number"<<endl;
}
void armstrong(int number){
    int temp = number;
    int length=0;
    while(number>0){
        number = number/10;
        ++length;
    }
    cout<<length<<endl;
    int r,sum = 0;
    int n = temp;
    while(n>0)    
        {    
            r=n%10;    
            sum+=pow(r,length);
            n=n/10;    
        } 
    if(temp==sum) 
    cout<<"armstrong  number "<<endl;
    else
    cout<<"not armstrong number"<<endl;
} 
int main(){
    int number;
    cin>>number;
    armstrong(number);
    prime_number(number);
    return 0;
}
