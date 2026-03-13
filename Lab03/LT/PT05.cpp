#include <iostream>
using namespace std;

main()
{
    int age;
    int moves;
    int yrs;

    cout << "Enter age : ";
    cin >> age;

    cout << "Enter moves : ";
    cin >> moves;

    yrs = age / (moves + 1);

    cout << "Average years = " << yrs;
}