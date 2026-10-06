#include <iostream>

bool isPrime(int n){
    if (n == 1) return false;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;

    for (int i = 1; i <= n / 2; i++){
        if(isPrime(i) && isPrime(n - i)) 
            std::cout << "That number can be expressed as the sum of " << i << " and " << n - i << std::endl;
    }

    return 0;
}
