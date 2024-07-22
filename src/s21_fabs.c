#include "s21_math.h"

long double s21_fabs(double x) {
  int flag = 1;
  if (x == -0) {
    x = 0;
    flag = 0;
  }
  if (x < 0 && flag) x = -x;
  return x;
}