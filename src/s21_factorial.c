#include "s21_math.h"

long double s21_factorial(int x) {
  long double res = 1;
  if (x == 0) {
    res = 1;
  }
  if (x > 0) {
    for (int i = x; i > 0; i--) {
      res *= i;
    }
  }
  return res;
}