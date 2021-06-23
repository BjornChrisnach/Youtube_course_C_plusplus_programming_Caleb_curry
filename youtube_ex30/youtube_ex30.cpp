#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // int x = 10 / 4;
    // double x = 10. / 4;
    // double x = 10 % 4;
    // double x = 10 + (4.0 / 3);
    // int x = (10 + 4) + 3;
    double x;
    double y;
    x = 10;
    // y = (x = 100); /100      100
    (y = x) = 100; //y = x; y = 100

    cout << x << "\t" << y << endl;


    return 0;
}