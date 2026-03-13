#include <iostream>
using namespace std;

main()
{
    float i;
    int p;
    int chance;

    cout << "Enter Imposters : ";
    cin >> i;

    cout << "Enter Players : ";
    cin >> p;

    chance = 100 * (i / p);

    cout << "Chance = " << chance << "%";
}