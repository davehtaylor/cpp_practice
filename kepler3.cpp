// This program implements Kepler's Third Law (Law of Periods).
// T^2 = Ka^3
// It asks the user for the radius or mean distance of the object
// from the sun, and returns the period of the orbit.


#include <iostream>
#include <math.h>


int main() {

    float K = 2.97e-19;                 // Kepler's Constant
    float a;

    std::cout << "Enter the radius or mean distance of the object, in meters: "; 
    std::cin >> a; 

    float T = sqrt(K * pow(a, 3.0));    // computes period in seconds
    float period = T/60/60/24/365;      // convert from seconds to years

    std::cout << "The object's period is " << period << " years." << std::endl;

    return 0;
}
