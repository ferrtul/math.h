#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0;

  if (((base == 0 || base == s21_INF) && exp == 0) || (base != 0 && exp == 0) ||
      base == 1)
    res = 1;
  if (base == -1 && exp == s21_INF) res = 1;
  if (base < 0 && exp != (int)exp) res = s21_NAN;
  if (base == s21_INF && exp == s21_INF) res = s21_INF;
  if (base < 0 && exp == (int)exp) {
    base = -base;
    res = s21_exp(exp * s21_log(base));
    if (s21_fmod(exp, 2) != 0) {
      res = -res;
    }

  } else if (res == 0)
    res = s21_exp(exp * s21_log(base));
  return res;
}
