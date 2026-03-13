#include <iostream>
using namespace std;

main()
{
    int n;
    int fps;
    int tnf;

    cout << "Number of Minutes : ";
    cin >> n;

    cout << "Frames per second : ";
    cin >> fps;

    tnf = fps * (n * 60);

    cout << "Total number of Frames : " << tnf;
}