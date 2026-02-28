#include <iostream>
using namespace std;

main(){
int V;
int I;
int P;

cout << "Enter the Coltage (V) in Volts : ";
cin >> V;

cout << "Enter the Current (I) in Amperes : ";
cin >> I;

P = I * V;

cout << "The Power (P) is = "<<P<<" Watts";
}