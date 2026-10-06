#include <iostream>

double harmonic(int n){
    return n <= 1 ? 1 : harmonic(n - 1) + 1.0 / n;
}

int main(){
    int n;

    std::cin >> n;

    std::cout << harmonic(n) << std::endl;

    return 0;
}