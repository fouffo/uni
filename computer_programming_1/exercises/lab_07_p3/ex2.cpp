#include <iostream>
#include <cmath>

short rollDice(){
    return std::rand() % 6 + 1;
}

short getStat(){
    short a, b, c, d;

    a = rollDice();
    b = rollDice();
    c = rollDice();
    d = rollDice();

    short all = a + b + c + d;
    all -= std::min(a, std::min(b, std::min(c, d)));
    return all;
}

int main(){
    srand(time(NULL));
    short strength, dexterity, constitution, intelligence, wisdom, charisma;

    strength = getStat();
    dexterity = getStat();
    constitution = getStat();
    intelligence = getStat();
    wisdom = getStat();
    charisma = getStat();

    std::cout << "Strength:\t" << strength << std::endl;
    std::cout << "Dexterity:\t" << dexterity << std::endl;
    std::cout << "Constitution:\t" << constitution << std::endl;
    std::cout << "Intelligence:\t" << intelligence << std::endl;
    std::cout << "Wisdom:\t\t" << wisdom << std::endl;
    std::cout << "Charisma:\t" << charisma << std::endl;

    short hitpoints = 10 + ((constitution - 10) / 2);
    std::cout << std::endl;
    std::cout << "Hitpoints:\t" << hitpoints << std::endl;
}
