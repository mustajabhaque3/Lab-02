#include <iostream>
using namespace std;

main(){
float valuepound;
float userpound;
float kg;

valuepound = 0.45;

cout << "Enter Weight in Pounds : ";
cin >> userpound ;

kg = userpound * valuepound ;

cout <<userpound<<"lb is equal to "<<kg<<"Kg";
}