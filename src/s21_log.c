#include "s21_math.h"

long double s21_log(double x) {
  long double i = 0, sum = 0, res = 0;

  int flag = 1;
  if (x == 1.) {
    res = 0;
    flag = 0;
  }
  if (x == 0.) {
    res = -s21_INF;
    flag = 0;
  }
  if (x < -0.) {
    res = s21_NAN;
    flag = 0;
  }
  if (x == s21_INF) {
    res = s21_INF;
    flag = 0;
  }

  if (flag) {
    while (x >= s21_E) {
      x /= s21_E;
      i++;
    }

    for (int j = 0; j < 1000; j++) {
      sum = res;
      res = sum + 2 * (x - s21_exp(sum)) / (x + s21_exp(sum));
    }
    res += i;
  }
  return res;
}