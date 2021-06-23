#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string greeting = "What the Hell";
    greeting.pop_back();
    greeting.replace(9, 4, "Heaven");
    // greeting.erase(greeting.length() - 1);
    // greeting += " there";
    // greeting.append(" there!");
    // greeting.insert(3, " ");
    // greeting.erase(3, 1);
    cout << greeting << endl;
    // cout << greeting.length() << endl;
    // cout << greeting.size() << endl;

    return 0;
}