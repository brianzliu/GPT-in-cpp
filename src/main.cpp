#include <iostream>

int main() {
  std::vector<int> nums = {1, 2, 3};

  for (int x : nums) {
    std::cout << x << "\n";
  }
}