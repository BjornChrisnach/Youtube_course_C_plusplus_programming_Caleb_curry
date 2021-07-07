#include <iostream>

int main()
{
    int guesses[10] = {12, 43, 23, 44, 24};

    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(guesses[0]);

    std::cout << size << std::endl;

    for(int i = 0; i < num_elements; i++)
    {
        std::cout << guesses[i] << std::endl;
    }



    // int num_elements = 5;
    // guesses[0] = 10;
    // std::cin >> guesses[0];
    // std::cout << guesses[0] << std::endl;


    // int guesses[] = {10, 13, 54, 42, 12, 13};
    // std::cout << guesses[3] << std::endl;
    // guesses[3] = 300;
    // std::cout << guesses[3] << std::endl;

    return 0;
}