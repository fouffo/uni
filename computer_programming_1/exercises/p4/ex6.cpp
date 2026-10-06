#include <iostream>
#include <cctype>

int main(){
    for (char c = 0; c <= 126; c++) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            std::cout << (int) c;
            std::cout << (islower(c) == 0) << std::endl;
        }
    }
}