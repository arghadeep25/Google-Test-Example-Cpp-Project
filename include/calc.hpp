#pragma once

#include <stdexcept>
class Calc {
 public:
  Calc() = default;

 public:
  static int sum(const int &x, const int &y) { return x + y; }
  static int diff(const int &x, const int &y) { return x - y; }
  static int div(const int &x, const int &y) {
    if (y == 0) {
      throw std::logic_error(0);
    }
    return x / y;
  }

 private:
  int m_x;
  int m_y;
};