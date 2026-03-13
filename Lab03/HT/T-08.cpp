#include <iostream>
using namespace std;

main()
{
    float vp;
    float fp;
    int tv;
    int tf;
    float tcoin;
    float tearn;

    cout << "Enter vegetable price per kilogram (in coins) : ";
    cin >> vp;

    cout << "Enter fruit price per kilogram (in coins) : ";
    cin >> fp;

    cout << "Enter total kilograms of vegetables : ";
    cin >> tv;

    cout << "Enter total number of kilograms of fruits : ";
    cin >> tf;

    tcoin = (vp * tv) + (fp * tf);
    tearn = tcoin / 1.94;

    cout << "Total earnings in rupees (Rps) : " << tearn;
}