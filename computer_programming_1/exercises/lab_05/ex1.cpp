#include <iostream>

int fact(int n){
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int cth(int l, int c) {
    return fact(l) / (fact(l - c) * fact(c));
}

void printRow(int l){
    for (int i = 0; i <= l; i++) {
        std::cout << cth(l, i) << " ";
    }
    std::cout << std::endl;
}

void printTriangle(int l){
    for (int i = 0; i <= l; i++) {
        printRow(i);
    }
    std::cout << std::endl;
}

int main(){
    int l;
    std::cin >> l;

    printTriangle(l);

    return 0;
}