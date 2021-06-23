#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // cout << sqrt(-25) << endl; // nan
    // cout << pow(9, 999) << endl; // inf
    // cout << NAN << endl; // nan
    // cout << INFINITY << endl; // inf
    // cout << -INFINITY << endl; // inf
    cout << remainder(10, 3.25) << endl; // inf
    cout << fmod(10, 3.25) << endl;
    cout << fmax(10, 3.25) << endl;
    cout << fmin(10, 3.25) << endl;
    cout << ceil(fmin(10, 3.25)) << endl;
    cout << floor(fmin(10, 3.25)) << endl;
    cout << trunc(fmin(10, 3.25)) << endl;
    cout << trunc(-1.5) << endl;
    cout << floor(-1.5) << endl;
    cout << ceil(-1.5) << endl;
    cout << round(-1.49) << endl;


    return 0;
}