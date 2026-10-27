#include <iostream>

// When I wrote this code only God knew how it worked.
// That has not changed.
int fib_tail(int n, int diff=0)
{ // tail recursive
    if (n <= 2)
    {
        return 1 + diff;
    }
    return fib_tail(n - 1, fib_tail(n - 2, diff));
}

int fib(int n)
{ // non-tail recursive
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

void verify(int n){
    for (int i = 1; i < n; i++)
    {
        int a = fib_tail(i);
        int b = fib(i);
        if(a != b) {
            std::cout << a << " != " << b << std::endl;
            return;
        }
        std::cout << a << " = " << b << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    verify(50);
}
