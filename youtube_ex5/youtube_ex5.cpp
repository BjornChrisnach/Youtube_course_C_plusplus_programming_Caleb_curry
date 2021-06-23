#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power << endl;
    
    return 0;
}