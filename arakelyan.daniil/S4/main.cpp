#include <iostream>

#include "RBTree.hpp"

int main()
{
  using namespace arakelyan;
  RBTree< size_t > otherT;
  otherT = {1,2};
  std::cout << "copyed tree: ";
  otherT.printInOrder();
  return 0;
}