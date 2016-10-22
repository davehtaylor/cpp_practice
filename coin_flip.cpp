#include <iostream>
#include <string>
#include <random> //srand(), rand()
#include <ctime> //time()


int main()
{
    std::string coin[] = {"Heads", "Tails"};

    // Random index to choose from the coin array
    std::srand(std::time(NULL));
    int rand_index = std::rand() % 2;

    // Simply print the result of the flip
    std::cout << coin[rand_index] << std::endl;

    return 0;
}
