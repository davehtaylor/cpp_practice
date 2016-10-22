#include <iostream>
#include <string>
#include <chrono> //seconds(), time()
#include <thread> //sleep_for()
#include <random> //srand(), rand()

void thinking()
{
    //Give some pause to appear to be thinking about the answer

    int i = 1;

    std::cout << "Contemplating ";

    while (i <= 3)
    {
        // Print three dots, slowly. Wait one second between printing each
        std::cout << '.';
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        i++;
    }
}


int main()
{
    // Variables to print the title banner
    std::string stars(26, '*');
    std::string spaces(5, ' ');

    // Random index to choose from the responses array
    std::srand(std::time(NULL));
    int rand_index = std::rand() % 19;

    // Eight ball responses
    std::string responses[] = {"It is certain",
                                "It is decidedly so",
                                "Without a doubt",
                                "Yes definitely",
                                "You may rely on it",
                                "As I see it, yes",
                                "Most likely",
                                "Outlook good",
                                "Yes",
                                "Signs point to yes",
                                "Reply hazy try again",
                                "Ask again later",
                                "Better not tell you now",
                                "Cannot predict now",
                                "Concentrate and ask again",
                                "Don't count on it",
                                "My reply is no",
                                "My sources say no",
                                "Outlook not so good",
                                "Very doubtful"};
    
    // Print a pretty banner
    std::cout << std::endl;
    std::cout << stars << std::endl;
    std::cout << spaces;
    std::cout << "MAGIC EIGHT BALL";
    std::cout << spaces << std::endl;
    std::cout << stars << std::endl;

    std::cout << std::endl;

    std::cout << "Think long and hard about your question. \n"
        "When you are ready, press the enter key\n"
        "to recieve your answer." << std::endl;

    // Wait for the user to press enter
    std::getchar();

    // Print the thinking animation
    thinking();
    std::cout << std::endl;

    // Print the response
    std::cout << responses[rand_index] << std::endl;
    std::cout << std::endl;

    return 0;
}
