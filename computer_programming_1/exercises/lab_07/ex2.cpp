#include <iostream>

bool checkCharacter(char c){
    return c >= 'a' && c <= 'z';
}

void convertCharacter(char& c){
    c = c + 'A' - 'a';
}

int main(){
    char c;

    std::cin >> c;
    
    if (checkCharacter(c)) {
        convertCharacter(c);
        std::cout << c << std::endl;
    }

    return 0;
}