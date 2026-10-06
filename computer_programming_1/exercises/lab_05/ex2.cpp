#include <iostream>

enum TType {
    error,
    equilateral,
    isosceles,
    scalene,
    init
};

bool isValid(int a, int b, int c){
    return a > 0
        && b > 0
        && c > 0
        && a + b >= c 
        && b + c >= a 
        && a + c >= b;
}

/*
TType getTType(int a, int b, int c){
    if (!isValid(a, b, c)){
        return TType::error;
    }
    if (a == b) {
        if (b == c) {
            return TType::equilateral;
        } else {
            return TType::isosceles;
        }
    } else {
        if {b == c} {
            return TType::isosceles;
        } else {
            if (a == c) {
                return TType::isosceles;
            } else {
                return TType::scalene;
            }
        }
    }
} */

TType getTType(int a, int b, int c){
    if (!isValid(a, b, c)){
        return TType::error;
    } else if (a == b && b == c) {
        return TType::equilateral;
    } else if (a == b || b == c || c == a) {
        return TType::isosceles;
    } 
}

int main(){
    

    return 0;
}
