#include <iostream>
#include <cmath>

int main() {
  int a, n;
  std::cin >> a >> n;

  for (int i = 1; i <= n; i++){
    std::cout << pow(a, i) << " ";
  }

  std::cout << std::endl;
}
