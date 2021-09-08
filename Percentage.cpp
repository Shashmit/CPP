#include<iostream>
using namespace std;

void printValue(double varFirst , double varSecond){
    cout<<varFirst<<" "<<varSecond<<endl;
}
void printer(double result,double varA,double varB){
    cout<<varA<<" is "<<result<<" percent of "<<varB<<endl;
}
int computePercent(double varFirst , double varSecond){
    double result;
    result = (varFirst/varSecond)*100;
    printer(result,varFirst,varSecond);
}
int main(){
    double var1,var2;
    cin>>var1>>var2;

    printValue(var1,var2);
    computePercent(var1,var2);
    swap(var1,var2);
    printValue(var1,var2);
    computePercent(var1,var2);
    return 0;
}
