#include <iostream>

// Exercise 1a: iterative factorial
unsigned long long fact(int n){
    if (n < 0)
        exit(-1); // we haven't covered exceptions yet so if an invalid input is provided this straight up crashes
    unsigned long long ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

// Exercise 1b: recursive factorial
unsigned long long fact_rec(int n){
    if (n < 0)
        exit(-1); // we haven't covered exceptions yet so if an invalid input is provided this straight up crashes
    if (n <= 1)
        return 1;
    return n * fact_rec(n - 1);
}

// Exercise 1c: iterative factorial with sum
unsigned long long fact(int n, int& sum){
    if (n < 0)
        exit(-1); // we haven't covered exceptions yet so if an invalid input is provided this straight up crashes
    unsigned long long ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
        sum += i;
    }
    return ret;
}

// Exercise 1d: recursive factorial with sum
unsigned long long fact_rec(int n, int& sum){
    sum += n;
    if (n < 0)
        exit(-1); // we haven't covered exceptions yet so if an invalid input is provided this straight up crashes
        if (n <= 1)
        return 1;
    return n * fact_rec(n - 1, sum);
}

int main(){
    int n;
    std::cin >> n;

    int sum = 0;

    std::cout << fact(n) << std::endl;
    std::cout << fact_rec(n) << std::endl;
    std::cout << fact(n, sum) << " " << sum << std::endl;
    sum = 0;
    std::cout << fact_rec(n, sum) << " " << sum << std::endl;
}
