// This program uses Newton's Law of Gravitation to calculate the
// gravitational force between two objects
//
// F = G(m1*m2/r^2)
//
// User will provide the mass of the two objects, and the distance between
// their centers of gravity.


#include <iostream>
#include <math.h>


int main() {

    const float G = 6.67e-11;
    float m1, m2, r, F;

    std::cout << "Enter the mass of object 1 in kilograms: ";
    std::cin >> m1;
    std::cout << "Enter the mass of object 2 in kilograms: ";
    std::cin >> m2;
    std::cout << "Enter the distance between their center's of gravity in meters: ";
    std::cin >> r;

    F = (G * m1 * m2)/pow(r, 2.0);

    std::cout << "The force of gravity is " << F << " Newtons." << std::endl;


    return 0;
}
