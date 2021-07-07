#include <iostream>
#include <limits>
#include <string>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int count = 0;
    const int SIZE = 100;
    int guesses[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i])  //return cin -> true if input worked
        {
            count++;
            //input worked
        }
        else
        {
            //invalid character
            break;
        }
    }

    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;

    return 0;
}