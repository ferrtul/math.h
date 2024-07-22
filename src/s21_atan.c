#include "s21_math.h"

long double s21_atan(double x) {
  if (x != x) return s21_NAN;
  long double res = 0;
  if (x > -1.0 && x < 1.0) {
    for (int i = 0; i < 500; i++) {
      res += (s21_pow(-1, i) / ((2 * i) + 1)) * s21_pow(x, ((2 * i) + 1));
    }
  }
  if (x == 1) res = 0.785398;
  if (x == -1) res = -0.785398;
  if (x > 1) res = (s21_PI / 2.0) - s21_atan(1.0 / x);
  if (x < -1) res = -1 * ((s21_PI / 2.0) + s21_atan(1.0 / x));

  return res;
}