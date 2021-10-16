#include <iostream>
using namespace std;
class Time{
    int hours, minutes;
    public:
    Time(int hrs, int min){
        hours = hrs;
        minutes = min;
        if(hours > 23) hours = 23;
        if(minutes > 59) minutes = 59;
    }
    void show(){
        cout<<this->hours<<":";
        if(this->minutes < 10) cout<<0;
        cout<<this->minutes<<endl;
    }
    Time add(int m){
        this->minutes += m;
        while(minutes >= 60){
            this->minutes -= 60;
            this->hours++;
        }
        while(this->hours > 23) this->hours -= 24;
        return *this;
    }
};
int main(){
    Time times[4] = {Time(12, 30), Time(14, 50), Time(23, 59), Time(3, 0)};
    for(int i = 0; i < 4; i++) times[i].show();
    cout<<endl;
    times[0].add(15).show();
    times[1].add(20).show();
    times[2].add(2).show();
    times[3].add(2881).show(); 
    return 0;
}