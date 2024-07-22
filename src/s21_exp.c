#include "s21_math.h"

long double s21_exp(double x) {
  long double sum = 1, res = 1, i = 1;
  int flag = 1;
  if (s21_fabs(x) < s21_EPS) {
    res = 1;
    flag = 0;
  }
  if (x >= s21_INF) {
    res = s21_INF;
    flag = 0;
  }
  if (x <= -s21_INF) {
    res = 0;
    flag = 0;
  } else {
    if (x < -15.) {
      res = 0;
      flag = 0;
    }
    while ((s21_fabs(sum) > s21_EPS) && flag) {
      sum *= x / i;
      res += sum;
      i++;
      if (res > MAX) {
        res = s21_INF;
        flag = 0;
      }
    }
  }
  return res;
}