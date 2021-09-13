//Average of number and number greater then the average number code.
#include <iostream> 
using namespace std; 
int main() { 
    int n,i; 
    cin>>n; 
    int a[n]; 
    for(i=0;i<n;i++){ 
        cin>>a[i]; 
} 
    int average = 0; 
    for(i=0;i<n;i++){ 
        average += a[i];
    } 
    average = average/n;
    cout<<"Average number "<<average<<endl; 
    for(i=0;i<n;i++){ 
        if(average<=a[i]){
        cout<<a[i]<<endl;
        }
    }  
return 0; 
}
