#include <iostream>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
    // std::cout << sizeof(array) << std::endl;
    // std::cout << size << std::endl;
}

int main()
{
    int guesses[] = {12,43,23,44,24};
    int arrSize = sizeof(guesses) / sizeof(int);
    std::cout << sizeof(guesses) << std::endl;

    print_array(guesses, arrSize);

    return 0;
}