#include <iostream>
#include <array>

// void print_array(std::array<int, 20> data, int size)
void print_array(std::array<int, 20> &data, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3);

    return 0;
}


// void print_array(std::array<int, 20> data)
// {
//     for(int i = 0; i < data.size(); i++)
//     {
//         std::cout << data[i] << "\t";
//     }
//     std::cout << "\n";
// }

// int main()
// {
//     std::array<int, 20> data = {1, 2, 3};
//     print_array(data);

//     return 0;
// }