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


int greater_of_three(int x, int y, int z)
{
    // Return the greater of three numbers

    int first_greater = greater(x, y);

    if (first_greater > z)
    {
        return first_greater;
    }
    else
    {
        return z;
    }
}


int main()
{
    int usernum1, usernum2, usernum3;

    std::cout << "Please enter a number: ";

    std::cin >> usernum1;

    std::cout << "Please enter another number: ";

    std::cin >> usernum2;

    std::cout << "Please enter one last number: ";

    std::cin >> usernum2;

    std::cout << greater_of_three(usernum1, usernum2, usernum3) 
        << " is the larger of the three." << std::endl;

    return 0;
}
