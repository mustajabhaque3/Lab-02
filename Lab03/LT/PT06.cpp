#include <iostream>
using namespace std;

main()
{
    int parea;
    int width;
    int height;
    int painted;

    cout << "Enter Paint Area : ";
    cin >> parea;

    cout << "Enter width : ";
    cin >> width;

    cout << "Enter height : ";
    cin >> height;

    painted = parea / (width * height);

    cout << "Walls painted = " << painted;
}