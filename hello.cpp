#include <iostream>
#include <string>

int main()
{
    std::string first_name;
    std::string stars(20, '*');

    std::cout << "What is your first name?" << std::endl;

    std::cin >> first_name;

    std::cout << "Hi " << first_name << ", it's nice to meet you!" << std::endl:
    std::cout << stars << std::endl;

    return 0;
}
