#include <iostream>
#include <string>

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
