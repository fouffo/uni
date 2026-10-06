#include <iostream>

int main() {
  char c;
  std::cin >> c;

  switch(c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      std::cout << "That letter is a vowel" << std::endl;
      break;
    default:
      std::cout << "That letter is a consonant" << std::endl;
  }
}
