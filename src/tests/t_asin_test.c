#include "../s21_test.h"

START_TEST(asin_test_1) {
  ck_assert_float_eq_tol(s21_asin(-1), asin(-1), 1e-6);
}
END_TEST

START_TEST(asin_test_2) { ck_assert_float_eq_tol(s21_asin(0), asin(0), 1e-6); }
END_TEST

START_TEST(asin_test_3) { ck_assert_float_eq_tol(s21_asin(1), asin(1), 1e-6); }
END_TEST

START_TEST(asin_test_4) {
  ck_assert_float_eq_tol(s21_asin(-0.99), asin(-0.99), 1e-6);
}
END_TEST

START_TEST(asin_test_5) {
  ck_assert_float_eq_tol(s21_asin(0.99), asin(0.99), 1e-6);
}
END_TEST

START_TEST(asin_test_6) {
  ck_assert_float_eq_tol(s21_asin(-0.4), asin(-0.4), 1e-6);
}
END_TEST

START_TEST(asin_test_7) {
  ck_assert_float_eq_tol(s21_asin(0.4), asin(0.4), 1e-6);
}
END_TEST

START_TEST(asin_test_8) { ck_assert_float_nan(s21_asin(2)); }
END_TEST

START_TEST(asin_test_9) { ck_assert_float_nan(s21_asin(-100)); }
END_TEST

START_TEST(asin_test_10) { ck_assert_double_nan(s21_asin(s21_NAN)); }
END_TEST

Suite *asin_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_ASIN\t\033[0m");
  TCase *tc = tcase_create("tASIN");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, asin_test_1);
  tcase_add_test(tc, asin_test_2);
  tcase_add_test(tc, asin_test_3);
  tcase_add_test(tc, asin_test_4);
  tcase_add_test(tc, asin_test_5);
  tcase_add_test(tc, asin_test_6);
  tcase_add_test(tc, asin_test_7);
  tcase_add_test(tc, asin_test_8);
  tcase_add_test(tc, asin_test_9);
  tcase_add_test(tc, asin_test_10);
  return s;
}
