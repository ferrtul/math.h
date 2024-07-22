#include "../s21_test.h"

START_TEST(cos_test_1) { ck_assert_float_eq_tol(s21_cos(-1), cos(-1), 1e-6); }
END_TEST

START_TEST(cos_test_2) { ck_assert_float_eq_tol(s21_cos(0), cos(0), 1e-6); }
END_TEST

START_TEST(cos_test_3) { ck_assert_float_eq_tol(s21_cos(1), cos(1), 1e-6); }
END_TEST

START_TEST(cos_test_4) {
  ck_assert_float_eq_tol(s21_cos(-0.99), cos(-0.99), 1e-6);
}
END_TEST

START_TEST(cos_test_5) {
  ck_assert_float_eq_tol(s21_cos(0.99), cos(0.99), 1e-6);
}
END_TEST

START_TEST(cos_test_6) {
  ck_assert_float_eq_tol(s21_cos(-0.4), cos(-0.4), 1e-6);
}
END_TEST

START_TEST(cos_test_7) { ck_assert_float_eq_tol(s21_cos(0.4), cos(0.4), 1e-6); }
END_TEST

START_TEST(cos_test_8) { ck_assert_float_eq_tol(s21_cos(2), cos(2), 1e-6); }
END_TEST

START_TEST(cos_test_9) {
  ck_assert_float_eq_tol(s21_cos(-100), cos(-100), 1e-6);
}
END_TEST

START_TEST(cos_test_10) { ck_assert_double_nan(s21_cos(s21_NAN)); }
END_TEST

START_TEST(cos_test_11) { ck_assert_ldouble_nan(s21_cos(s21_INF)); }
END_TEST

START_TEST(cos_test_12) {
  ck_assert_float_eq_tol(s21_cos(100), cos(100), 1e-6);
}
END_TEST
START_TEST(cos_test_13) {
  ck_assert_ldouble_eq_tol(s21_sin(4 * s21_PI), sin(4 * s21_PI), 1e-6);
}
END_TEST
START_TEST(cos_test_14) {
  ck_assert_ldouble_eq_tol(s21_sin(-4 * s21_PI), sin(-4 * s21_PI), 1e-6);
}
END_TEST

Suite *cos_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_COS\t\t\033[0m");
  TCase *tc = tcase_create("tCOS");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, cos_test_1);
  tcase_add_test(tc, cos_test_2);
  tcase_add_test(tc, cos_test_3);
  tcase_add_test(tc, cos_test_4);
  tcase_add_test(tc, cos_test_5);
  tcase_add_test(tc, cos_test_6);
  tcase_add_test(tc, cos_test_7);
  tcase_add_test(tc, cos_test_8);
  tcase_add_test(tc, cos_test_9);
  tcase_add_test(tc, cos_test_10);
  tcase_add_test(tc, cos_test_11);
  tcase_add_test(tc, cos_test_12);
  tcase_add_test(tc, cos_test_13);
  tcase_add_test(tc, cos_test_14);
  return s;
}
