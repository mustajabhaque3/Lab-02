#include <iostream>
using namespace std;

main(){
int dollarprice;
int dollar;
int rupees;
dollarprice = 282;

cout << "Enter Amount In Dollars :";
cin >> dollar;

rupees = dollar * dollarprice;

cout << "$"<<dollar<<"into Rupees are Rs"<<rupees;
}