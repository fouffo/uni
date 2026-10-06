#include <iostream>
#include <cmath>

void maxMin1(int a, int b){
  int max = max(a, b);
  int min = min(a, b);

  std::cout << a << b << std::endl;
}

void maxMin2(int a, int b){
  bool cond = a > b;

  int max = cond ? a : b;
  int min = cond ? b : a;

  std::cout << a << b << std::endl;
}

void maxMin3(int a, int b){
  int max = max(a, b);
  int min = min(a, b);

  //skip

  std::cout << a << b << std::endl;
}


int main(){


  return 0;
}
