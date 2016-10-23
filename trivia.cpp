#include <iostream>
#include <string>


struct Player
{
    std::string name;
    int score = 0;
};


int main()
{

    // Initialize a player struct
    struct Player Player1;
    
    // Variables for the banner and menu
    std::string stars(31, '*');
    std::string spaces(10, ' ');
    std::string border(9, '*');

    // Variable for main menu choice
    int menu_choice;


    // Print a pretty banner
    std::cout << std::endl;
    std::cout << stars << std::endl;
    std::cout << spaces;
    std::cout << "TRIVIA GAME";
    std::cout << spaces << std::endl;
    std::cout << stars << std::endl;
   
    std::cout << std::endl;

    std::cout << "MAIN MENU" << std::endl;
    std::cout << border << std::endl; 

    std::cout << "1. Play Game" << std::endl;
    std::cout << "2. Quit" << std::endl;

    while (menu_choice < 1 || menu_choice > 2)
    {
        // Make sure the player can only enter choices presented on the menu.
        // If 1, play begins below. If 2, program exits.
        
        std::cin >> menu_choice;

        switch (menu_choice)
        {
            case 1:
                std::cout << std::endl;
                std::cout << "Let's play the game!" << std::endl;
                std::cout << std::endl;
                break;
            case 2:
                std::exit(0);
                break;
            default:
                std::cout << "Sorry, please enter your choice again: ";
        }
    }


    // If the player chooses to play, game begins here

    std::cout << "Please enter your name: ";
    std::cin >> Player1.name;

    std::cout << "Hi " << Player1.name << ", your current "
        "score is " << Player1.score << std::endl;


    return 0;
}
