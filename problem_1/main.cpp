/**
 * @auth: Portland.HODL
 * @desc0: Project Euler Problem 1
 * @desc1: Find the sum of all numbers that are divisible by 3 or 5 up to 1000
 */

#include <iostream>

int main() {
  int sum = 0;
  for (int i = 0; i < 1000; ++i) {
    if (i % 5 == 0 || i % 3 == 0) {
      sum += i;
    }
  }

  std::cout << "Sum of all numbers that are divisible by 3 or 5 to 1000 is ... "
            << sum << std::endl;
}
