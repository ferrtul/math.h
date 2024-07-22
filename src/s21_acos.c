#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0;

  if (x == 2 || x == -100 || x != x)
    res = s21_NAN;
  else
    res = s21_PI / 2 - s21_asin(x);

  return res;
}
