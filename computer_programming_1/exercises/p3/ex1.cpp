#include <iostream> 
#include <cmath>

int main() {
  double a, b, c;

  std::cin >> a >> b >> c;

  double delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    std::cout << "The function does not have any solutions" << std::endl;
  } else {
    double x1, x2;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    std::cout << "The solutions of the function are " << x1 << " and " << x2 << std::endl;
  }
  return 0;
}

