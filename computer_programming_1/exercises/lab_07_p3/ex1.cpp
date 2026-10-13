#include <iostream>

void addValue(char c, short& score){
    switch(c){
        case 'D':
        case 'G':
            score += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            score += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            score += 4;
            break;
        case 'K':
            score += 5;
            break;
        case 'J':
        case 'X':
            score += 8;
            break;
        case 'Q':
        case 'Z':
            score += 10;
            break;
        default: // yeah if you give an invalid input it's your fault twin
            score += 1;
    }
}

char genRandomChar(){
    char rand = std::rand() % ('Z' - 'A' + 1) + 'A';
    [[likely]] // this is just some toomfolery you can ignore
    return rand < 'Z' ? rand : '0';
}

int main(){
    srand(time(NULL));
    short score = 0;
    while(true){
        char c;
        // std::cin >> c;
        c = genRandomChar();
        std::cout << c;
        if(c == '0'){
            break;
        }
        addValue(c, score);
    }
    std::cout << score << std::endl;
}
