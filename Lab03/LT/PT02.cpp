#include <iostream>
using namespace std;

main()
{
    int twopoints;
    int threepoints;
    int tpoints;

    cout << "Enter 2 Pointers : ";
    cin >> twopoints;

    cout << "Enter 3 Pointers : ";
    cin >> threepoints;

    tpoints = (twopoints * 2) + (threepoints * 3);

    cout << "Total Points = " << tpoints;
}