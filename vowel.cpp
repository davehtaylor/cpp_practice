#include <iostream>


bool is_vowel(char c)
{
    // Take in a character, and decide if it is a vowel. Return true if
    // it is, false if not.

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char c;

    std::cout << "Please enter a letter. Let's see if it's "
        "a vowel or a consonant:" << std::endl;
    
    std::cin >> c;

    if (is_vowel(c) == true)
    {
        std::cout << "Yes, that's a vowel!" << std::endl;
    }
    else
    {
        std::cout << "Looks like that's a consonant." << std::endl;
    }

    return 0;
}
