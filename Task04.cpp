#include <iostream>
using namespace std;

main(){
int Q;
int t;
int I;

cout << "Enter the Charge (Q) in Coulombs : ";
cin >> Q;

cout << "Enter the Time (t) in Seconds : ";
cin >> t;

I = Q / t;

cout << "The current (I) is = "<<I<<" Amperes";
}