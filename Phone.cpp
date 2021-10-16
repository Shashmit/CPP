#include<iostream>
using namespace std; 

class Phonecall { 
private: 
    string phonenum; 
    double perminuterate; 
    double callduration; 
public: 
    bool operator==(  Phonecall &n ){ 
    return phonenum == n.phonenum;
    }
    friend ostream & operator<<( ostream &f, Phonecall &n ); 
    friend istream & operator>>( istream &f, Phonecall &n ); 
 }; 
 ostream & operator<<( ostream &f,  Phonecall &n ) { 
    f << "Phone number: " << n.phonenum << ", Duration: " << n.callduration << " minutes, Rate: " << n.perminuterate << endl; 
 return f; 
 } 
 istream & operator>>( istream &f, Phonecall &n ) { 
 f >> n.phonenum; 
 f >> n.callduration; 
 f >> n.perminuterate; 
 return f; 
 } 

int main( ) { 
 Phonecall a[10]; 
 cout << "Enter 10 phone numbers: duration in minutes, and the per-minute rates." << endl; 
 for ( int i= 0; i < 10; ) { 
     cin >> a[i]; 
     int j; 
     for ( j= 0; j < i; ++j ) 
         if ( a[i] == a[j] ) { 
             cout << "Duplicate number information ignored. Try again." << endl; 
             break; 
         } 
     if ( j == i ) ++i; 
 } 
 for ( int i= 0; i < 10; ++i ) 
     cout << a[i];
 return 0; 
 }