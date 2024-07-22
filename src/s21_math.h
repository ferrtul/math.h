#ifndef S21_MATH_H
#define S21_MATH_H

#include <stdio.h>

#define s21_EPS 1e-16
#define MAX 1.7976931348623158e+308
#define s21_INF (1.0) / (0.0)
#define s21_NAN (0.0) / (0.0)
#define s21_E 2.7182818284590452353602874713527
#define s21_PI 3.14159265358979323846

long double s21_factorial(int x);
long double s21_fabs(double x);
long double s21_pow(double base, double exp);
long double s21_ceil(double x);
long double s21_log(double x);
long double s21_exp(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_sqrt(double x);
int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);

#endif
