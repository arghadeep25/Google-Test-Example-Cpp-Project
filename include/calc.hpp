#pragma once

class Calc {
 public:
  Calc() = default;

 public:
  static int sum(const int &x, const int &y) { return x + y; }

 private:
  int m_x;
  int m_y;
};