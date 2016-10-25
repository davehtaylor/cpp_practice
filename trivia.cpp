#include <iostream>
#include <string>   // std::string
#include <fstream>  // std::ifstream
#include <vector>   // std::vector


// Struct to hold player name and score
struct Player {
    std::string name;
    int score = 0;
};


// Function to split a string on a delimiter.
//
// Arguments taken: a string. Possilby a vector. Still
// working on that bit.
//
// Returns: not sure yet. May use return, might simply
// write to a vector. Using void return at the moment until 
// I sort it out.
void string_split(std::string s) {

    char delim = '\"';
    std::string comma = ",";
    int start = 0;
    int found = s.find(delim);

    while (found != std::string::npos) {
        
        // Make easy variables for the substrings
        std::string tok = s.substr(start, (found - start));
        std::string tok_end = s.substr(start, s.length());

        // If the substring is just a comma, don't print anything.
        // Otherwise, print the substring. This will allow the string
        // to be split at the quotes, and then drop the commas between
        // Eventually this won't print things out, but will most likely
        // write the tokens to something else. Will update as I change it.
        if (tok == comma) {
            std::cout << "";
        } else {
            std::cout << tok << std::endl;
        }
        
        start = (found + 1);
        found = s.find(delim, start);

    }
}


// Take the file needed for the questions, open it, add the info to a
// vector, then close the file. 
//
// Arguments taken: the file to be used as input, and a pointer to 
// the vector where the information will be stored.
//
// Outputs: no return value. Function will write the file data to a
// vector, questions_and_answers
void get_questions(std::string file, 
                   std::vector< std::vector<std::string> >& questions_and_answers) {
    
    // Variables for trivia data file. 
    std::ifstream category_file;
    std::string tok;

    // Open the category file with the apporpriate input file
    category_file.open(file, std::ios::in);

    // Make sure the file opened properly, then get each line 
    // from the file and append it to the vector.
    if (category_file.is_open()) {
        while (std::getline(category_file, tok, ',')) {
            for (int i = 0; i <= 9; i++) {
                std::vector<std::string> row;
                for (int j = 0; j <= 5; j++) {
                    row.push_back(tok);
                }
                questions_and_answers.push_back(row);
            }
        }
    } else {
        std::cout << "Error opening data file" << std::endl;
        std::exit(0); 
    }

    // Close the category file
    category_file.close();
}


int main() {

    // Initialize a player struct
    struct Player Player1;
    
    // Variables for the banner and menu borders
    std::string stars(31, '*');
    std::string spaces(10, ' ');
    std::string border(9, '*');

    // Variable for main menu choice
    int menu_choice;

    // Vector to hold the trivia category data
    std::vector< std::vector<std::string> > questions_and_answers;

    // ---------------------

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

    // Make sure the player can only enter choices presented on the menu.
    // The user will choose the category of trivia they want to play.
    // For each category option, the category questions and answers file
    // will be passed to the get_questions function, along with the vector
    // in which the data will be stored. 
    while (menu_choice < 1 || menu_choice > 5) {

        std::cin >> menu_choice;

        switch (menu_choice) {
            case 1:
                std::cout << std::endl;
                std::cout << "GENERAL TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("GeneralTrivia.csv", questions_and_answers);
                break;
            case 2:
                std::cout << std::endl;
                std::cout << "EIGHTIES TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("EightiesTrivia.csv", questions_and_answers);
                break;
            case 3:
                std::cout << std::endl;
                std::cout << "MOVIE TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("MovieTrivia.csv", questions_and_answers);
                break;
            case 4:
                std::cout << std::endl;
                std::cout << "MUSIC TRIVIA" << std::endl;
                std::cout << std::endl;
                get_questions("MusicTrivia.csv", questions_and_answers);
                break;
            case 5:
                std::exit(0);
                break;
            default:
                std::cout << "Sorry, please enter your choice again: ";
        }
    }


    std::cout << "Please enter your name: ";
    std::cin >> Player1.name;

    std::cout << "Hi " << Player1.name << std::endl;


    // Testing different outputs as I learn WTF I'm doing
//    int vect_size = questions_and_answers.size();
//    int i = 0;
//    while (i <= vect_size) {
//        std::cout << questions_and_answers[i] << std::endl;
//        i++;
//    }

    std::cout << questions_and_answers[0][0] << std::endl;
    std::cout << questions_and_answers[0][1] << std::endl;
    std::cout << questions_and_answers[0][2] << std::endl;
    std::cout << questions_and_answers[0][3] << std::endl;
    std::cout << questions_and_answers[0][4] << std::endl;
    std::cout << questions_and_answers[0][5] << std::endl;

    std::cout << questions_and_answers[1][0] << std::endl;
    std::cout << questions_and_answers[1][1] << std::endl;
    std::cout << questions_and_answers[1][2] << std::endl;
    std::cout << questions_and_answers[1][3] << std::endl;
    std::cout << questions_and_answers[1][4] << std::endl;
    std::cout << questions_and_answers[1][5] << std::endl;
    return 0;
}
