#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::string filename;
    std::cin >> filename;

    // std::ofstream file;
    // file.open("hello.txt");
    // std::ofstream file ("hello.txt");
    //std::ofstream file ("hello.txt");
    std::ofstream file (filename.c_str(), std::ios::app);


    if(file.is_open())
    {
        std::cout << "success n00b\n";
    }

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");
    //file << "hey";

    for(std::string name : names)
    {
        file << name << std::endl;
    }

    file.close();
    return 0;
}