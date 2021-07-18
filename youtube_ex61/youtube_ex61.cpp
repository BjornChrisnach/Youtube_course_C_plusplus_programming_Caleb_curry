#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file ("tacos.txt");

    if(file.is_open())
    {
        std::cout  << "It worked!\n";
    }

    std::string line;
    getline(file, line);

    std::cout << line << "\n";

    // char temp = file.get();
    // std::cout << temp << "\n";

    // //std::vector<std::string> names;
    // std::vector<char> names;

    // //std::string input;
    // char input;
    // while(file >> input) //return file
    // {
    //     names.push_back(input);
    // }

    // // for(std::string name : names)
    // for(char name : names)
    // {
    //     std::cout << name << std::endl;
    // }    
    
       return 0;
}