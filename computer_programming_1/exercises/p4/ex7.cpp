#include <iostream>

int main(){
    char a, b;
    std::cin >> a >> b;

    while (a <= b) {
        std::cout << a++ << " ";
    }
    std::cout << std::endl;

    return 0;
}
