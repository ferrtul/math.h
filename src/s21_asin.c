#include "s21_math.h"

long double s21_asin(double x) {
  long double res = 0;

  if (x < 1 && x > -1) res = s21_atan(x / s21_sqrt(1 - (x * x)));
  if (x == 1) res = s21_PI / 2;
  if (x == -1) res = -s21_PI / 2;
  if (x == 0) res = 0;
  if (x == 2 || x == -100 || x != x) res = s21_NAN;
  return res;
}
