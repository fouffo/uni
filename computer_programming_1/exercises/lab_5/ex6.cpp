#include <iostream>

bool check(int a, int b){
    return a % 10 == b % 10;
}

int main(){
    int a, b;
    std::cout << "Write two numbers and I will tell you if their last digit is the same! " << std::endl;
    std::cin >> a >> b;

    std::cout << check(a, b) << std::endl;

    return 0;
}
