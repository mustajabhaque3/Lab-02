#include <iostream>
using namespace std;

main()
{
    int n;
    int w;
    int h;
    int walls;

    cout << "Number of square meters you can paint : ";
    cin >> n;
    cout << "Width of a single wall (in meters) : ";
    cin >> w;
    cout << "Height of a single wall : ";
    cin >> h;

    walls = n / (w * h);

    cout << "Number of Walls you can paint :" << walls;
}