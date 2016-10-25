#include <iostream>
#include <string>   // string
#include <fstream>  // ifstream
#include <sstream>  // istringstream
#include <vector>   // vector

struct Player
{
    // Struct to hold player name and score
    std::string name;
    int score = 0;
};


void get_questions(std::string file, 
        std::vector<std::string>* questions_and_answers)
{
    // Take the file needed for the questions, open it, add the info to a
    // vector, then close the file.
    
    // Variables for trivia data file. The user will choose a trivia category,
    // and the input file will be assigned to the appropriate category file
    std::ifstream category_file;
    std::string line;

    // Open the category file with the apporpriate input file
    category_file.open(file, std::ios::in);

    while (std::getline(category_file, line))
    {
        //std::cout << line << std::endl;
        questions_and_answers->push_back(line);
    }
    
    // Close the category file
    category_file.close();
}


int main()
{

    // -- Variables ---

    // Initialize a player struct
    struct Player Player1;
    
    // Variables for the banner and menu
    std::string stars(31, '*');
    std::string spaces(10, ' ');
    std::string border(9, '*');

    // Variable for main menu choice
    int menu_choice;

    // Vector to hold the category data
    std::vector<std::string> questions_and_answers;

    // ----------------


    // Print a pretty banner
    std::cout << std::endl;
    std::cout << stars << std::endl;
    std::cout << spaces;
    std::cout << "TRIVIA GAME";
    std::cout << spaces << std::endl;
    std::cout << stars << std::endl;
   
    std::cout << std::endl;

    // Print the main menu
    std::cout << "MAIN MENU" << std::endl;
    std::cout << border << std::endl; 

    std::cout << "1. General Trivia" << std::endl;
    std::cout << "2. Eighties Trivia" << std::endl;
    std::cout << "3. Movie Trivia" << std::endl;
    std::cout << "4. Music Trivia" << std::endl;
    std::cout << "5. Quit" << std::endl;

    std::cout << std::endl;

    std::cout << "Selection: ";

    while (menu_choice < 1 || menu_choice > 5)
    {
        // Make sure the player can only enter choices presented on the menu.
        // The user will choose the category of trivia they want to play.

        std::cin >> menu_choice;

        switch (menu_choice)
        {
            case 1:
                std::cout << std::endl;
                std::cout << "GENERAL TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("GeneralTrivia.csv", &questions_and_answers);
                break;
            case 2:
                std::cout << std::endl;
                std::cout << "EIGHTIES TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("EightiesTrivia.csv", &questions_and_answers);
                break;
            case 3:
                std::cout << std::endl;
                std::cout << "MOVIE TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("MovieTrivia.csv", &questions_and_answers);
                break;
            case 4:
                std::cout << std::endl;
                std::cout << "MUSIC TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("MusicTrivia.csv", &questions_and_answers);
                break;
            case 5:
                std::exit(0);
                break;
            default:
                std::cout << "Sorry, please enter your choice again: ";
        }
    }


    // If the player chooses to play, game begins here

    std::cout << "Please enter your name: ";
    std::cin >> Player1.name;

    std::cout << "Hi " << Player1.name << std::endl;

    int vect_size = questions_and_answers.size();
    int i = 0;
    while (i <= vect_size)
    {
        std::cout << questions_and_answers[i] << std::endl;
        i++;
    }
    return 0;
}
