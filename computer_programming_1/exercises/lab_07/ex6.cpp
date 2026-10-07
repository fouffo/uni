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

void squish(int& h, int &m, int &s){
    int rest;
    m += division(s, 60, rest);
    s = rest;
    h += division(m, 60, rest);
    m = rest;
}

int main(){
    int h, m, s;
    std::cin >> h >> m >> s;

    squish(h, m, s);

    std::cout << h << ":" << m << ":" << s << std::endl;

    return 0;
}
