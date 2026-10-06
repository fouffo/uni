#include <iostream>
#include <cstdlib>

int main(){
    int maxGoals = 0;
    int totalGoals = 0;

    std::srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int goals = std::rand() % 4; // this is from 0 to 3 inclusive
        std::cout << "Match " << i << ": " << goals << std::endl;
        totalGoals += goals;
        if (maxGoals < goals) maxGoals = goals;
    }

    std::cout << "Total goals: " << totalGoals << std::endl;
    std::cout << "Average goals per match: " << totalGoals / 10.0 << std::endl;
    std::cout << "Maximum goals in a single match: " << maxGoals << std::endl;
    
    return 0;
}