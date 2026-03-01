#include <iostream>
using namespace std;

main()
{
    string name;
    float padult;
    float pchild;
    int sadult;
    int schild;
    float charitypercent;
    float tmoney;
    float charity;
    float remains;

    cout << "Enter the movie name : ";
    cin >> name;

    cout << "Enter the adult ticket price : $";
    cin >> padult;

    cout << "Enter the child ticket price : $";
    cin >> pchild;

    cout << "enter the number of adult tickets sold : ";
    cin >> sadult;

    cout << "Enter the number of child tickets sold : ";
    cin >> schild;

    cout << "Enter the percentage of amount to be donated to charity : ";
    cin >> charitypercent;

    tmoney = (padult * sadult) + (pchild * schild);
    charity = tmoney * (charitypercent / 100);
    remains = tmoney - charity;

    cout << "----------------------------------------------------------------------------------" << endl;
    cout << "Movie : " << name << endl;
    cout << "Total amount generated from ticket sales : $" << tmoney << endl;
    cout << "Donation to Charity (" << charitypercent << "%) : $" << charity << endl;
    cout << "Remaining amount after donation : $" << remains;
}