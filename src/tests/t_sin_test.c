#include "../s21_test.h"

START_TEST(sin_test_1) { ck_assert_float_eq_tol(s21_sin(-1), sin(-1), 1e-6); }
END_TEST

START_TEST(sin_test_2) { ck_assert_float_eq_tol(s21_sin(0), sin(0), 1e-6); }
END_TEST

START_TEST(sin_test_3) { ck_assert_float_eq_tol(s21_sin(1), sin(1), 1e-6); }
END_TEST

START_TEST(sin_test_4) {
  ck_assert_float_eq_tol(s21_sin(-0.99), sin(-0.99), 1e-6);
}
END_TEST

START_TEST(sin_test_5) {
  ck_assert_float_eq_tol(s21_sin(0.99), sin(0.99), 1e-6);
}
END_TEST

START_TEST(sin_test_6) {
  ck_assert_float_eq_tol(s21_sin(-0.4), sin(-0.4), 1e-6);
}
END_TEST

START_TEST(sin_test_7) { ck_assert_float_eq_tol(s21_sin(0.4), sin(0.4), 1e-6); }
END_TEST

START_TEST(sin_test_8) { ck_assert_float_eq_tol(s21_sin(2), sin(2), 1e-6); }
END_TEST

START_TEST(sin_test_9) {
  ck_assert_float_eq_tol(s21_sin(-100), sin(-100), 1e-6);
}
END_TEST

START_TEST(sin_test_10) { ck_assert_double_nan(s21_sin(s21_NAN)); }
END_TEST

START_TEST(sin_test_11) { ck_assert_ldouble_nan(s21_sin(s21_INF)); }
END_TEST

START_TEST(sin_test_12) {
  ck_assert_ldouble_eq_tol(s21_sin(s21_PI), sin(s21_PI), 1e-6);
}
END_TEST

START_TEST(sin_test_13) {
  ck_assert_ldouble_eq_tol(s21_sin(2 * s21_PI), sin(2 * s21_PI), 1e-6);
}
END_TEST

START_TEST(sin_test_14) {
  ck_assert_ldouble_eq_tol(s21_sin(4 * s21_PI), sin(4 * s21_PI), 1e-6);
}
END_TEST
START_TEST(sin_test_15) {
  ck_assert_ldouble_eq_tol(s21_sin(-4 * s21_PI), sin(-4 * s21_PI), 1e-6);
}
END_TEST
START_TEST(sin_test_16) {
  ck_assert_float_eq_tol(s21_sin(100), sin(100), 1e-6);
}
END_TEST

Suite *sin_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_SIN\t\t\033[0m");
  TCase *tc = tcase_create("tSIN");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, sin_test_1);
  tcase_add_test(tc, sin_test_2);
  tcase_add_test(tc, sin_test_3);
  tcase_add_test(tc, sin_test_4);
  tcase_add_test(tc, sin_test_5);
  tcase_add_test(tc, sin_test_6);
  tcase_add_test(tc, sin_test_7);
  tcase_add_test(tc, sin_test_8);
  tcase_add_test(tc, sin_test_9);
  tcase_add_test(tc, sin_test_10);
  tcase_add_test(tc, sin_test_11);
  tcase_add_test(tc, sin_test_12);
  tcase_add_test(tc, sin_test_13);
  tcase_add_test(tc, sin_test_14);
  tcase_add_test(tc, sin_test_15);
  tcase_add_test(tc, sin_test_16);
  return s;
}
