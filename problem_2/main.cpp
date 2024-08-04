/**
 * @auth: Portland.HODL
 * @desc0: Project Euler Problem 2
 * @desc1: Find the sum of all the even-valued terms in the Fibonacci sequence
 * which do not exceed four million.
 */

#include <iostream>

void fib_sum(int *fib_vals, int &acc, int &even_acc, const int &thresh) {
  acc = fib_vals[0] + fib_vals[1];
  if (acc <= thresh && (acc % 2 == 0)) {
    even_acc += acc;
  }
  fib_vals[0] = fib_vals[1];
  fib_vals[1] = acc;
}

int main() {
  constexpr int thresh = 4000000;
  int acc = 0;
  int even_acc = 0;
  int fib_acc[2] = {0, 1};

  while (acc < thresh) {
    fib_sum(fib_acc, acc, even_acc, thresh);
  }

  std::cout << "Sum of all values in the fib sequence that do no exceed 4MM "
               "that are even is ... "
            << even_acc << std::endl;
}
