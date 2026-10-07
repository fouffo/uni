#include <iostream>
#include <cstdlib>

enum Player {
    DEFENDER,
    STRIKER
};

void generate(int maxNum, int minNum, int& diceStiker, int& diceDefender){
    diceStiker = minNum + rand() % (maxNum - minNum + 1);
    diceDefender = minNum + rand() % (maxNum - minNum + 1);
}

void compaire(int defenderRoll, int strikerRoll){
    std::cout << (defenderRoll > strikerRoll ? "The defender won!" : "The striker won!") << std::endl;
}

int main(){
    srand(time(NULL));

    int defenderRoll = rand() % 6 + 1;
    int strikerRoll = rand() % 6 + 1;

    generate(1, 6, strikerRoll, defenderRoll);

    compaire(defenderRoll, strikerRoll);

    return 0;
}
