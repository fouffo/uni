#include <iostream>

int pow(int a, int b){
    int res = 1;
    for (int i = 0; i < b; i++){
        res *= a;
    }
    return res;
}

int bin2D(int n){
    int res = 0;
    for (int i = 0; n > 0; i++) {
        res += n % 10 == 0 ? 0 : pow((n % 10) * 2, i);
        std::cout << (n % 10) * 2 << std::endl;
        n /= 10;
    }
    return res;
}

int main(){
    int n;
    std::cin >> n;

    std::cout << bin2D(n) << std::endl;

    return 0;
}
