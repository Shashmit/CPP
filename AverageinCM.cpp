#include<iostream>
using namespace std;
 
typedef struct{
    double lengthInFeet;
    double widthInFeet;
    double areaInFeet;
}CarpetInFeet;
 
void convertIntoCM(CarpetInFeet standard){
    CarpetInFeet CarpetInCM;
    CarpetInCM.lengthInFeet = 30.48 * standard.lengthInFeet;
    CarpetInCM.widthInFeet = 30.48 *standard.widthInFeet;
    CarpetInCM.areaInFeet = 30.48 *standard.areaInFeet;
    cout<<"Length in CM : "<<CarpetInCM.lengthInFeet<<endl;
    cout<<"Width in CM : "<<CarpetInCM.widthInFeet<<endl;
    cout<<"Area in CM : "<<CarpetInCM.areaInFeet<<endl;
}
 
int displayArea( CarpetInFeet standard){
    double total = standard.lengthInFeet*standard.widthInFeet;
    cout<<"AREA IN FEET IS : "<<total<<endl;
    return total;
}
int main(){
    CarpetInFeet standard;
    cout<<"Enter the length and width : ";
    cin>>standard.lengthInFeet>>standard.widthInFeet;
    standard.areaInFeet =  displayArea(standard);
    convertIntoCM(standard);
    return 0;
}
