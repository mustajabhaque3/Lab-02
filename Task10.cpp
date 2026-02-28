#include <iostream>
using namespace std;

main(){
int wins;
int draws;
int losses;
int winpoints;
int drawpoints;
int losspoints;
int result;

cout << "Enter the number of wins : ";
cin >> wins;

cout << "Enter the number of draws : ";
cin >> draws;

cout << "Enter the number of Losses: ";
cin >> losses;

winpoints = wins * 3;
drawpoints = draws * 1;
losspoints = losses * 0;
result = winpoints + drawpoints + losspoints;

cout << "Pakistan has obtained "<<result<<" in Asia Cup Tournament";

}