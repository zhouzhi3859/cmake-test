#include <iostream>
#include <boost/winapi/time.hpp>
long fibonacci_a(int n);
long fibonacci_b(int n);

int main() {
  double start1 = GetTickCount();
  long fibRes1 = fibonacci_a(40);
  std::cout << "C++ module:"<< GetTickCount() - start1 << "ms,result:" << fibRes1 << std::endl;
  double start2 = GetTickCount();
  long fibRes2 = fibonacci_b(40);
  std::cout << "C++ module loop:"<< GetTickCount() - start2 << "ms,result:" << fibRes2 << std::endl;
  return 0;
}

long fibonacci_a(int n) {
  if (n < 2) {
    return n;
  }
  return fibonacci_a(n - 2) + fibonacci_a(n - 1);
}

long fibonacci_b(int n) {
  long feb_n_val = 0;
  int i;
  long a = 1;
  long b = 1;
  if (n < 3) {
    return 1;
  }
  for(i = 3;i <= n;i++) {
    feb_n_val = a + b;
    b = a;
    a = feb_n_val;
  }
  return feb_n_val;
}
//#include <stdio.h>
//int main()
//{
//    printf("hello\n");
//    return 0;
//}
