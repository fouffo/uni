#include <iostream>

int max_two(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b;
    std::cout << "Write two numbers and I will tell you the maximum! " << std::endl;
    std::cin >> a >> b;

    std::cout << "The greatest of the numbers you gave me is " << max_two(a, b) << std::endl;

    return 0;
}