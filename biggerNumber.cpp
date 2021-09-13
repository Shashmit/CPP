#include <iostream>
using namespace std;
 
int main() {
    int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int largest = 0;
for(i=0;i<n;i++){
    if(largest<a[i]){
        largest = a[i];
    }
}
cout<<"Your largest number is "<<largest<<endl;
return 0;
}