#include <iostream>
using namespace std;

main(){
string name;
float matric;
float inter;
float ecat;
float matricagg;
float interagg;
float ecatagg;
float aggregate;

cout << "Enter The Student's Name : ";
cin >> name;

cout << "Enter Matriculation Marks (out of 1100) : ";
cin >> matric;

cout << "Enter Intermediate Marks (out of 1200) : ";
cin >> inter;

cout << "Enter ECAT Marks (out of 400) : ";
cin >> ecat;

matricagg = (matric * 10) / 1100;
interagg = (inter * 40) / 1200;
ecatagg = (ecat * 50) / 400;
aggregate = matricagg + interagg + ecatagg;

cout << "Aggregate score for "<<name<<"is "<<aggregate<<" %";

}