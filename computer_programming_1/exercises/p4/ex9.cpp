#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));
    int rnd = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    while (true) {
        std::cout << "Take a wild guess: ";
        std::cin >> guess;
        attempts++;
        if (guess < rnd) 
            std::cout << "Too low, try again!" << std::endl;
        else if (guess > rnd) 
            std::cout << "Too high, try again!" << std::endl;
        else break;
    }

    std::cout << "Correct! That took you " << attempts << " attempts!" << std::endl;

    return 0;
}
