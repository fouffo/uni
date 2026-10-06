#include <iostream>

int main(){
  int h = 20;
  int m = 30;
  int s = 40;

  const int SECONDS_IN_A_DAY = 24 * 60 * 60;
  
  int elapsed = h * 60;
  elapsed += m;
  elapsed *= 60;
  elapsed += s;

  int left = SECONDS_IN_A_DAY - elapsed;

  std::cout << h << ":" << m << ":" << s << " is " << left << " seconds away from midnight." << std::endl;

  s = SECONDS_IN_A_DAY - left;
  m = s / 60;
  s %= 60;
  h = m / 60;
  m %= 60;

  std::cout << left << " seconds away from midnight is " << h << ":" << m << ":" << s << std::endl;

  return 0;
}
