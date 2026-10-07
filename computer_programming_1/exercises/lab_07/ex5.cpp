#include <iostream>

int division(int dividend, int divisor, int& rest){
    int quotient = 0;

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    rest = dividend;

    return quotient;
}

int main(){
    int a, b, rest;
    std::cin >> a >> b;

    std::cout << division(a, b, rest) << " with rest " << rest << std::endl;

    return 0;
}