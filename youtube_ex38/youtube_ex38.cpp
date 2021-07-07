#include <iostream>
#include <string>

int main()
{
    int fact = 5;
    int factorial = fact;  //5*4*3*2*1
    int i = factorial - 1;
    while(i > 1)
    {
        factorial *= i;
        
        i--;
    }
    std::cout << "factorial of " << fact << ": " << factorial << std::endl;

    // for(int i = 0; i < 10 ; i++)
    // {

    // }


    /*
    int fact = 5;
    int factorial = fact;
    for(int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "factorial of " << fact << " : " << factorial << std::endl;
    */

    return 0;
}