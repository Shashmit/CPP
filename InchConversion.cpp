#include<iostream>
using namespace std;

void compute_yard (double inch)
{
  double yardd;
  yardd = inch / 36;
  cout << yardd <<" Conversion in Yard "<< endl;
}
void compute_feet (double inch)
{
  double feett;
  feett = inch / 12;
   cout << feett <<" Conversion in Feet " << endl;
}
int main ()
{
  double inch,feet,yard;
  cin >> inch;
  compute_feet (inch);
  compute_yard (inch);
}



