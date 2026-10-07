#include <iostream>
#include <cstdlib>

void create_dice_roll(int& onesRolled){
    int roll = rand() % 6 + 1;
    if (roll == 1)
        onesRolled++;
}

int main(){
    srand(time(NULL));

    int guess;

    std::cout << "How many ones do you expect me to roll in 10 tries? : ";
    std::cin >> guess;

    int onesRolled = 0;
    for (int i = 0; i < 10; i++)
    {
        create_dice_roll(onesRolled);
    }
    
    std::cout << (onesRolled == guess ? "You won!" : "You lost :[") << std::endl;
    std::cout << "I rolled " << onesRolled << " ones." << std::endl;

    return 0;
}