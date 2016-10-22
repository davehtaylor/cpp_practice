#include <iostream>


int greater(int x, int y)
{
    // Return the greater of two numbers

    if (x > y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}


int main()
{
    int usernum1, usernum2;

    std::cout << "Please enter a number: ";

    std::cin >> usernum1;

    std::cout << "Please enter another number: ";

    std::cin >> usernum2;

    std::cout << greater(usernum1, usernum2) 
        << " is the larger of the two." << std::endl;

    return 0;
}
