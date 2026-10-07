#include <iostream>
#include <cmath>
#include <iomanip>

double serie(int precision){
    return precision == 1 ? 1 : 1.0 / (precision * precision) + serie(precision - 1);
}

double pi(double serie){
    return sqrt(serie * 6);
}

int main(){
    std::cout << pi(serie(10000)) << std::endl;

    return 0;
}