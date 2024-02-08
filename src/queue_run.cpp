#include <iostream>

#include "queue.hpp"

int main() {
  dataStructure::queue::queue<int> q;
  // q.enqueue(5);
  // q.enqueue(6);
  std::cout << q.front() << std::endl;
}