// Dice rolling
//
// This program will roll a set of 7 dice, as in a typical RPG setting. 
// Included are:
//
// 4-sided die (d4)
// 6-sided die (d6)
// 8-sided die (d8)
// 10-sided die (d10)
// 12-sided die (d12)
// 20-sided die (d20)
// Percentile 10-sided die (d10 showing 00-90)
//
// This program will contain 7 vectors holding the different values for each
// die. When a roll is thrown, the vectors will be randomly shuffled, and the 
// first index from each die vector will be chosen and presented to the user,
// along with an identification of which die the number came from.


#include <iostream>
#include <vector>       // std::vector
#include <random>       // std::default_random_engine
#include <algorithm>    // std::shuffle
#include <chrono>       // std::chrono::system_clock


int main() {

    std::vector<int> d4 {1,2,3,4};
    std::vector<int> d6 {1,2,3,4,5,6};
    std::vector<int> d8 {1,2,3,4,5,6,7,8};
    std::vector<int> d10 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> d10p {0,10,20,30,40,50,60,70,80,90};;
    std::vector<int> d12 {1,2,3,4,5,6,7,8,9,10,11,12};
    std::vector<int> d20 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    unsigned int seed = 
        std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rand_generator;

    std::shuffle(std::begin(d4), std::end(d4),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d6), std::end(d6),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d8), std::end(d8),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d10), std::end(d10),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d10p), std::end(d10p),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d12), std::end(d12),
        std::default_random_engine(seed));
    std::shuffle(std::begin(d20), std::end(d20),
        std::default_random_engine(seed));

    std::cout << "d4: " << d4[0] << std::endl;
    std::cout << "d6: " << d6[0] << std::endl;
    std::cout << "d8: " << d8[0] << std::endl;
    std::cout << "d10: " << d10[0] << std::endl;
    std::cout << "d10%: " << d10p[0] << std::endl;
    std::cout << "d12: " << d12[0] << std::endl;
    std::cout << "d20: " << d20[0] << std::endl;

    return 0;
}
