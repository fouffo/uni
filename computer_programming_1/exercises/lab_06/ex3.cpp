#include <iostream>
#include <cmath>

void printReverse(int n){
    while (n > 0) {
        std::cout << n % 10;
        n /= 10;
    }
    std::cout << std::endl;
}

int getReverse(int n){ // the function name was supposed to be printReverse but it wouldn't compile with both
    int res = 0;
    int i = 0;
    while (n > 0) {
        res *= 10;
        res += (n % 10);
        n /= 10;
    }
    return res;
}

int main(){
    int n;

    std::cin >> n;
    
    printReverse(n);

    std::cout << getReverse(n) << std::endl;

    return 0;
}