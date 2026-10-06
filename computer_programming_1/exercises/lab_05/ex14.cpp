#include <iostream>
#include <cstdlib>

double getJumpHeight(){
    return 1.0 + std::rand() % 201 / 100.0;
}

void declareWinner(double p1Height, double p2Height){
    std::cout << (p1Height > p2Height ? "Player 1 wins!" : "Player 2 wins!") << std::endl;
}

int main(){
    std::srand(time(NULL))

    int p1Jump1, p1Jump2, p2Jump1, p2Jump2;

    p1Jump1 = getJumpHeight

    return 0;
}