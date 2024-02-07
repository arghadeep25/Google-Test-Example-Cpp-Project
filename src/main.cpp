#include <iostream>

#include "calc.hpp"

int main() {
  //   Calc calc(3, 4);
  int result = Calc::sum(3, 4);
  std::cout << "Sum: " << result << std::endl;
  std::cout << "Diff: " << Calc::diff(3, 4) << std::endl;
  return 0;
}