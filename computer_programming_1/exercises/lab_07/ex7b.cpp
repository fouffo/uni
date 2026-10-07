#include <iostream>
#include <climits>

int max(int a, int b = INT_MIN, int c = INT_MIN, int d = INT_MIN, int e = INT_MIN){
    int max = a;
    if (b > max) 
        max = b;
    if (c > max) 
        max = c;
    if (d > max) 
        max = d;
    if (e > max) 
        max = e;
    return max;
}

bool continuing(){
    char input;
    do {
        std::cout << "Do you want to quit? (y/n) : ";
        std::cin >> input;
    } while (input != 'y' && input != 'Y' && input != 'n' && input != 'N');
    return !(input != 'n' && input != 'N');
}

int main(){
    do {
        int n, a, b, c, d, e;

        std::cin >> n;
        
        std::cin >> a;
        if (n > 1)
            std::cin >> b;
        if (n > 2)
            std::cin >> c;
        if (n > 3)
            std::cin >> d;
        if (n > 4)
            std::cin >> e;
        
        switch(n){
            case 1:
                std::cout << a << std::endl;
                break;
            case 2:
                std::cout << max(a, b) << std::endl;
                break;
            case 3:
                std::cout << max(a, b, c) << std::endl;
                break;
            case 4:
                std::cout << max(a, b, c, d) << std::endl;
                break;
            case 5:
                std::cout << max(a, b, c, d, e) << std::endl;
                break;
        }
    } while (continuing());
        
    return 0;
}
