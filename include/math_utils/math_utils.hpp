# pragma once

namespace math_utils {
  inline int add(int a, int b) {
    return a + b;
  }

  inline int subtract(int a, int b) {
    return a - b;
  }

  inline int multiply(int a, int b) {
    return a * b;
  }
  
  inline int devide(int a, int b) {
    if(b == 0) {
      std::cout << "Division by zero!\n";
      return -1;
    }
    return a / b;
  }
  
  inline int power(int base, int exponent) {
    if(base == 0)     return 0;
    if(exponent == 0) return 1;
    int exp = std::abs(exponent);
    
    int result = 1;
    for(int i = 0; i < exp; ++i) {
      result *= base;
    }
    return result;
  }

  inline long long factorial(int n) {
    if(n < 0) return -1;
    if(n == 0 || n == 1) return 1;

    return n*factorial(n - 1);
  }
}
