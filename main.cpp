#include "Aggregator.h"
#include <iostream>

int main() {
  swo::Aggregator a;
  a.collect({1, 2, 3});
  std::cout << a.getSum();
}