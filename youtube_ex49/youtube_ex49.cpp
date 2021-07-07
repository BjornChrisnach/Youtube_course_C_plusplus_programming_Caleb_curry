#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int elementCount)
{
    std::cout << "Here are your guesses and so, your try count\
 to win the game. Try to improve yourself, and play again." << std::endl;
    for(int i = 0; i < elementCount; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}


void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;

        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        }
        else if(guess < random)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }
    }
    print_array(guesses, guess_count);
}


int main()
{
    srand(time(NULL));

    int choice;
    
    do
    {
        std::cout << "0. Quit" << std::endl << "1. Play Game\n";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        }

    }
    while(choice != 0);
}