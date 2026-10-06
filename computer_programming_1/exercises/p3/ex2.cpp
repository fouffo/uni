#include <iostream>

int main() {
  int a, b, c;

  std::cin >> a >> b >> c;

  if(a < b) {
    std::cout << (b < c ? a : (a < c ? a : c)) << std::endl;
  } else {
    std::cout << (b < c ? b : c) << std::endl;
  }

  return 0;
}
