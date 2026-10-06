#include <iostream>
#include <cmath>

int main(){
  const float PI = 3.14159265358;
  
  float r = 67;

  float area = r * r * PI;
  float circumference = 2 * r * PI;

  std::cout << "Radius :\t" << r << std::endl; 
  std::cout << "Area :\t\t" << area << std::endl; 
  std::cout << "Circumference :\t" << circumference << std::endl;

  std::cout << M_PI;

  return 0;
}

