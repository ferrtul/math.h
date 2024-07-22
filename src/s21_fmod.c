#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  int flag = 1;
  if (y == 0. || x == s21_INF || x == -s21_INF) {
    res = s21_NAN;
    flag = 0;
  }
  if ((y == s21_INF || y == -s21_INF) && flag) {
    res = x;
    flag = 0;
  }
  if (flag) {
    res = (long double)x - (long long int)(x / y) * (long double)y;
  }
  return res;
}