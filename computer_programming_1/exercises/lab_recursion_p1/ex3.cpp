#include <iostream>

void print_bin(int n){
    if (n > 1) {
        print_bin(n >> 1); // bit shift to the right, divides by two and truncates)
    }
    std::cout << n % 2;
}

int main(){
    print_bin(12045);
}
