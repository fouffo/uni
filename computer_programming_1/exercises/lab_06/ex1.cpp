#include <iostream>
#include <cctype>

/* implementation 1 with library functions
bool checkCharacter(char c){
    return isalpha(c) && islower(c);
}

char convertCharacter(char c){
    return toupper(c);
}
*/

bool checkCharacter(char c){
    return c >= 'a' && c <= 'z';
}

char convertCharacter(char c){
    return c + 'A' - 'a';
}

int main(){
    char c;

    std::cin >> c;
    
    if (checkCharacter(c)) {
        std::cout << convertCharacter(c) << std::endl;
    }

    return 0;
}