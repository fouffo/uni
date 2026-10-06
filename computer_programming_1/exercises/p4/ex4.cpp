#include <iostream>

int main(){
    int n;

    std::cin >> n;

    if (n == 0) {
        std::cout << 0 << std::endl;
    } else if (n == 1){
        std::cout << 1 << std::endl;
    } else {
        int a = 0;
        int b = 1;
        int temp;

        for (int i = 2; i < n; i++){
            temp = a + b;
            a = b;
            b = temp;
        }
        std::cout << b << std::endl;
    }

    return 0;
}
