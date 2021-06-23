#include <iostream>
#include <float.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int cents = 100;
    double a = 10.0 / 3;
    // float a = 10.0 / 3;
    a = a * 10000000000000;
    double b = 77000; // 7.7E4      7.7 x 10^4
    long double c;

    cout << std::fixed << a << endl;
    cout << LDBL_DIG << endl;
    //cout << FLT_DIG << endl;
    //7.7 * 10000 = 77000
    //77000.


    return 0;
}