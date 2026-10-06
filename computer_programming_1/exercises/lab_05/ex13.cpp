#include <iostream>

int main() {
    char c;
    int n;

    std::cout << "Tell me a letter: ";
    std::cin >> c;

    std::cout << "Tell me how much to shift the character by: ";
    std::cin >> n;

    if (c >= 'A' && c <= 'Z') {
        c += n;
        while (c < 'A' || c > 'Z'){
            if (c < 'A') {
                c += 'Z' - 'A';
            } else {
                c -= 'A' - 'Z';
            }
        }
    }

    if (c >= 'a' && c <= 'z') { // this is not an else because if it's not either of the condition it's the user's fault and they are undeserving of a message
        c += n;
        while (c < 'a' || c > 'z'){
            if (c < 'a') {
                c += 'z' - 'a';
            } else {
                c -= 'a' - 'z';
            }
        }
    }

    std::cout << "When shifted by " << n << " your character probably becomes " << c << std::endl;

    return 0;
}