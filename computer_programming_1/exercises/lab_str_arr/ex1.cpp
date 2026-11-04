#include <iostream>
#include <string>

unsigned int count_words(std::string str) {
    if (str.length() == 0) {
        return 0;
    }
    unsigned int spaces = 0;
    for (char c : str){
        if (c == ' ')
            ++spaces;
    }
    return spaces + 1;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::cout << "You said " << count_words(line) << " words." << std::endl;
}
