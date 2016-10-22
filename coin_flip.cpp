#include <iostream>
#include <string>
#include <random> //srand(), rand()


int main()
{
    std::string coin[] = {"Heads", "Tails"};

    // Random index to choose from the coin array
    srand(time(NULL));
    int rand_index = rand() % 2;

    // Simply print the result of the flip
    std::cout << coin[rand_index] << std::endl;

    return 0;
}
