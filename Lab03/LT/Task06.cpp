#include <iostream>
using namespace std;

main(){
int usermb;
int Mb;
int Kb;
int bites;
int bits;

Mb = 1024;
Kb = 1024;
bites = 8;

cout << "Enter the size in megabites (MB) : ";
cin >> usermb;

bits = (usermb * Mb) * Kb * bites;

cout <<usermb<< "Mb is equal to "<<bits<<"bits";
}