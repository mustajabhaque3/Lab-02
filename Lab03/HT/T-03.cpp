#include <iostream>
using namespace std;

main()
{
    int vi;
    int acceleration;
    int time;
    int vf;

    cout << "Enter Initial Velocity (m/s) : ";
    cin >> vi;

    cout << "Enter Acceleration (m/s^2) : ";
    cin >> acceleration;

    cout << "Enter Time (s) : ";
    cin >> time;

    vf = (acceleration * time) + vi;

    cout << "Final Velocity (m/s) : " << vf;
}