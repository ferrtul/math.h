#include "../s21_test.h"

START_TEST(test_log_1) { ck_assert_ldouble_nan(s21_log(s21_NAN)); }
END_TEST

START_TEST(test_log_2) { ck_assert_ldouble_nan(s21_log(-s21_INF)); }
END_TEST

START_TEST(test_log_3) { ck_assert_ldouble_nan(s21_log(-1.0)); }
END_TEST

START_TEST(test_log_4) { ck_assert_double_eq(s21_log(1), log(1)); }
END_TEST

START_TEST(test_log_5) {
  ck_assert_ldouble_eq_tol(s21_log(1.00001), log(1.00001), 1e-6);
}
END_TEST

START_TEST(test_log_6) { ck_assert_double_eq(s21_log(101), log(101)); }
END_TEST

START_TEST(test_log_7) {
  ck_assert_double_eq_tol(s21_log(9762.25426), log(9762.25426), 1e-6);
}
END_TEST

START_TEST(test_log_8) { ck_assert_ldouble_nan(s21_log(-s21_NAN)); }
END_TEST

START_TEST(test_log_9) { ck_assert_ldouble_eq(s21_log(0), log(0)); }
END_TEST

Suite *log_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_LOG\t\t\033[0m");
  TCase *tc = tcase_create("tLOG");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_log_1);
  tcase_add_test(tc, test_log_2);
  tcase_add_test(tc, test_log_3);
  tcase_add_test(tc, test_log_4);
  tcase_add_test(tc, test_log_5);
  tcase_add_test(tc, test_log_6);
  tcase_add_test(tc, test_log_7);
  tcase_add_test(tc, test_log_8);
  tcase_add_test(tc, test_log_9);

  suite_add_tcase(s, tc);
  return s;
}
