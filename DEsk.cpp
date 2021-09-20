#include <iostream>
using namespace std;
 
int total(int draw,char type){
    int cost = 0;
    int eachhdrawer = 30;
    switch(type){
        case 'm':
        cost += (draw *eachhdrawer)+180;
        return cost;
         case 'p':
        cost += (draw *eachhdrawer)+100;
        return cost;
         case 'o':
        cost += (draw *eachhdrawer)+140;
        return cost;
    }
   return 0;
}
 
int drawers(){
    int numberofdrawer=0;
    cout<<"Enter the number of drawer you want : "<<endl;
    cin>>numberofdrawer;
    return numberofdrawer;
}
char wood(){
    char wood_type;
    cout<<"type of wood—‘m’ for mahogany, ‘o’ for oak, or ‘p’ pine."<<endl;
    cin>>wood_type;
    switch(wood_type){
        case 'm':
            cout<<"You have selected mahogany"<<endl;
            break;
            case 'o':
                cout<<"You have selected oak"<<endl;
                break;
            case 'p':
                cout<<"You have selected forpine"<<endl;
                break;
            default:
             	cout<<"Not a valid input "<<endl;
             	break;
    }
    return wood_type;
}
int main() {
   int draw =  drawers();
   char type =  wood();
   int cost = total(draw,type);
    cout<<"total cost is : "<<cost<<endl;
    return 0;
}
