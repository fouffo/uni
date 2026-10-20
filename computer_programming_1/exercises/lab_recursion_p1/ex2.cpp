#include <iostream>

int mod(int dividend, int divisor, int& result){
    result = 0;
    int remainder;
    if (dividend < divisor) {
        remainder = dividend;
    } else {
        remainder = mod(dividend - divisor, divisor, result);
        result += 1;
    }
    return remainder;
}

int main(){
    int result;
    std::cout << mod(14, 3, result) << " is the remainder, and the result is the following: " << result << std::endl;
}
