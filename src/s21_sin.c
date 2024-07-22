#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  int flag = 1;
  if (x == 0.) {
    res = 0;
    flag = 0;
  }
  if (x == s21_INF) {
    res = s21_NAN;
    flag = 0;
  }
  if (s21_fmod(x, s21_PI) == 0 && flag) {
    long double l = x / s21_PI;
    if (s21_fmod(l, 2) == 0) {
      res = (x < 0) ? 0. : (-0.);
      flag = 0;
    } else {
      res = (x > 0) ? 0. : (-0.);
      flag = 0;
    }
  }
  if (flag) {
    while (x < -2 * s21_PI || x > 2 * s21_PI) {
      if (x < -2 * s21_PI) {
        x += 2 * s21_PI;
      } else {
        x -= 2 * s21_PI;
      }
    }
    for (int i = 0; i < 200; i++) {
      res += s21_pow(-1, i) * s21_pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
    }
  }
  return res;
}
