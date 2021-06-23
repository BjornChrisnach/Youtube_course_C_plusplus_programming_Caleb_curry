#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string greeting;
    getline(cin, greeting); //for string
    cout << greeting << endl;
    // cin.getline() //for int and double
    
    // cin >> greeting;
    // string leftOver;
    // cin >> leftOver;
    // cout << greeting << endl;
    // cout << leftOver << endl;

    return 0;
}