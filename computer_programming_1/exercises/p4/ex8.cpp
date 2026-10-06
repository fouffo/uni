#include <iostream>

int main(){
    int h;
    std::cin >> h;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < h - i; j++){
            std::cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
