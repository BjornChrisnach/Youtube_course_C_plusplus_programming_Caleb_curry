#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // string greeting = "What the Hell?";
    // greeting.replace(greeting.find("Hell"), 4, "****");
    // cout << greeting << endl;
    string greeting = "What is up?";
    // cout << greeting.substr(5, 2) << endl;
    // cout << greeting.find_first_of("aeiou") << endl;
    // cout << greeting.find_first_of("!") << endl;
    //npos == -1
    // if(greeting.find_first_of("!") == -1) cout << "NOT FOUND!" << endl;
    if(greeting == "What is up?") cout << "Equals" << endl;
    if(greeting.compare("What is up?") == 0) cout << "Equals" << endl;
    
    return 0;
}