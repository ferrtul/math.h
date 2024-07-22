#include "s21_math.h"

long double s21_tan(double x) {
  long double res = 0;
  int flag = 1;
  if (x == 0) {
    res = 0;
    flag = 0;
  }
  if (x == s21_INF) {
    res = s21_NAN;
    flag = 0;
  }
  if (s21_fmod(x, s21_PI) == 0 && flag) {
    res = (x < 0) ? 0. : (-0.);
    flag = 0;
  }
  res = s21_sin(x) / s21_cos(x);

  return res;
}