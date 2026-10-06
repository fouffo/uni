#include <iostream>

int sumUpTo(int n){
    int res = 0;
    for (int i = 1; i <= n; i++){
        res += i;
    }
    return res;
}

/* bonus (if you don't understand how this works it's fine, we will probably see recursion in class soon either way)

int sumUpTo(int n){
    return n < 1 ? 0 : sumUpTo(n - 1) + n;
} 

*/

int main(){
    int n;
    std::cout << "Write a number and I will tell you the sum of it and all the natural numbers before! " << std::endl;
    std::cin >> n;

    std::cout << "The sum is" << sumUpTo(n) << std::endl;

    return 0;
}
