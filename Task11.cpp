#include <iostream>
using namespace std;

main(){
int current;
int birthmonthly;
int birthyearly;
int threedecades;

cout << "Enter the current world Population : ";
cin >> current;

cout << "Enter monthly birth rate : ";
cin >> birthmonthly;

birthyearly = birthmonthly * 12;
threedecades = (birthyearly * 30) + current;

cout << "The population in three decades will be : "<<threedecades;
}