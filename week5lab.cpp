#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main() {

int a, b,c; //declaring variables
auto bar = c;
cout << "Enter two numbers to represent two sides of a right triangle:" << endl; //requesting variables
cin >> a >> b;
c = pow(a,2) + pow (b,2) ; //creating equation and determining value of d
auto d = sqrt(c); //declaring and initializing value of d

ofstream myfile;
myfile.open ("week5lab.txt");
myfile << "The sides of the triangle are:  " <<a << "cm   " <<b << "cm   " <<d << "cm"; //ouputing to .txt file
myfile.close();



return 0;
}