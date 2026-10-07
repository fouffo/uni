#include <iostream>
#include <cstdlib>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int b = 6;

    std::cout << a << b << std::endl;
    swap(&a, &b);
    std::cout << a << b << std::endl;

    return 0;
}
