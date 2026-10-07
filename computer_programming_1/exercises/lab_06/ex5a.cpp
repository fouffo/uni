#include <iostream>
#include <cstdlib>

// the enum is not needed by any means
enum Player {
    DEFENDER,
    STRIKER
};

Player compaire(int defenderRoll, int strikerRoll){
    return defenderRoll < strikerRoll ? Player::DEFENDER : Player::STRIKER;
}

int main(){
    srand(time(NULL));

    int defenderRoll = rand() % 6 + 1;
    int strikerRoll = rand() % 6 + 1;

    switch (compaire(defenderRoll, strikerRoll)) {
        case Player::DEFENDER:
            std::cout << "The defender won!" << std::endl;
            break;
        case Player::STRIKER:
            std::cout << "The striker won!" << std::endl;
            break;
    }

    return 0;
}
