#include <iostream>

bool implicates(bool p, bool q){
  if (p && !q) 
    return false;
  return true;
}

int main(){
  std::cout << implicates(false, false) << implicates(false, true) << implicates(true, false) << implicates(true, true) << std::endl;
  return 0;
}

// TODO: do this without selection
