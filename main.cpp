// Copyright 20019 <zhi.zhou>.
#include <boost/winapi/time.hpp>
#include <iostream>
#include "main.h"  // NOLINT(build/include)

int main() {
  double start1 = GetTickCount();
  int64_t fibRes1 = fibonacci_a(40);
  std::cout << "C++ module:"<< GetTickCount() - start1
    << "ms,result:" << fibRes1 << std::endl;
  double start2 = GetTickCount();
  int64_t fibRes2 = fibonacci_b(40);
  std::cout << "C++ module loop:"
    << GetTickCount() - start2 << "ms,result:" << fibRes2 << std::endl;
  return 0;
}

int64_t fibonacci_a(int n) {
  if (n < 2) {
    return n;
  }
  return fibonacci_a(n - 2) + fibonacci_a(n - 1);
}

int64_t fibonacci_b(int n) {
  int64_t feb_n_val = 0;
  int i;
  int64_t a = 1;
  int64_t b = 1;
  if (n < 3) {
    return 1;
  }
  for (i = 3; i <= n; i++) {
    feb_n_val = a + b;
    b = a;
    a = feb_n_val;
  }
  return feb_n_val;
}
