#include "s21_math.h"

long double s21_floor(double x) {
  long double res_x = (long long int)x;
  int flag = 1;
  if (x == s21_INF) {
    res_x = s21_INF;
    flag = 0;
  }
  if (x == -s21_INF) {
    res_x = -s21_INF;
    flag = 0;
  }
  if (s21_fabs(x) > 0. && res_x != x && flag) {
    if (x < 0.) {
      res_x -= 1;
    }
  }
  if (x != x) res_x = s21_NAN;

  return res_x;
}