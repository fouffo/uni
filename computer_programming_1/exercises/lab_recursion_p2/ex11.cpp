#include <iostream>

int pow(int n, int exp){
    return exp == 0 ? 1 : n * pow(n, exp - 1);
}

int main(){
    int n, exp;
    std::cin >> n >> exp;
    std::cout << pow(n, exp) << std::endl;
}
