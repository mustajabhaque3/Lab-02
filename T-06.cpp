#include <iostream>
using namespace std;

main()
{
    float weight;
    float bcost;
    float size_per_bag;
    float ppp;
    float cost_per_sqrfoot;

    cout << "Enter size of the fertilizer bag in pounds : ";
    cin >> weight;

    cout << "Enter the cost of bag : $ ";
    cin >> bcost;

    cout << "Enter area in square feet that can be covered by the bag : ";
    cin >> size_per_bag;

    ppp = bcost / weight;
    cost_per_sqrfoot = bcost / size_per_bag;

    cout << "Cost of fertilizer per pound : $ " << ppp << endl;
    cout << "Cost of fertilizing per square foot : $ " << cost_per_sqrfoot;
}