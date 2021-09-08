#include<iostream>
using namespace std;

void print_total(int total){
    cout<<"Total Wall area of the Room "<<total<<endl;
}
void print_total_gallon(int total_NoGallons){
    cout<<"Total Gallons required "<<total_NoGallons<<endl;
}
void print_total_gallon_rate(int total_NoGallons){
    cout<<"Total Gallons Cost "<<total_NoGallons<<endl;
}
int gallons_required(int gallons){
    int one_gallon_fill = 350;
    int total_NoGallons = gallons/one_gallon_fill;
    print_total_gallon(total_NoGallons);
    return total_NoGallons;
}
void gallon_rate( int rate){
    int price_ofOne = 32;
    int total_Output = price_ofOne* rate;
    print_total_gallon_rate(total_Output);
}
int Area(int length,int width, int height){
    int total;
    total = length*width*height;
    print_total(total);
    return total;
}
int main(){
    int length, width,height;
    cin>>length>>width>>height;
    int gallons = Area(length,width,height);
    int rate = gallons_required(gallons);
    gallon_rate(rate);
    return 0;
}
