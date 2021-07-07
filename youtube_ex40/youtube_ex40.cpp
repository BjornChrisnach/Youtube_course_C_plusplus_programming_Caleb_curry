#include <iostream>
#include <string>

int main()
{
    std::string sentence = "Hello my name is Caleb";
    for(int i = 0 ; i < sentence.size(); i++)
    {
        if(sentence[i] == ' ')
        {
            continue;
        }
        std::cout << sentence[i] << std::endl;
    }
    std::cout << "Done!\n";

    return 0;
}