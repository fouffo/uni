#include <iostream>
#include <cctype>

/* implementation 1 with library functions
bool checkCharacter(char c){
    return isalpha(c) && islower(c);
}

void printConvertedCharacter(char c){
    std::cout << toupper(c) << std::endl;
}
*/

bool checkCharacter(char c){
    return c >= 'a' && c <= 'z';
}

void printConvertedCharacter(char c){
    std::cout << c + 'A' - 'a' << std::endl;
}

int main(){
    char c;

    std::cin >> c;
    
    if (checkCharacter(c)) {
        printConvertedCharacter(c);
    }

    return 0;
}