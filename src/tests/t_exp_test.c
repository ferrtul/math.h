#include "../s21_test.h"

START_TEST(test_exp_1) {
  ck_assert_double_eq_tol(s21_exp(2.718282), exp(2.718282), 1e-6);
}
END_TEST

START_TEST(test_exp_2) {
  ck_assert_double_eq_tol(s21_exp(-228.12), exp(-228.12), 1e-6);
}
END_TEST

START_TEST(test_exp_3) { ck_assert_double_eq(s21_exp(s21_INF), exp(INFINITY)); }
END_TEST

START_TEST(test_exp_5) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(test_exp_4) { ck_assert_ldouble_nan(s21_exp(s21_NAN)); }
END_TEST

START_TEST(test_exp_6) { ck_assert_double_eq_tol(s21_exp(0), exp(0), 1e-6); }
END_TEST

START_TEST(test_exp_7) { ck_assert_double_eq_tol(s21_exp(1), exp(1), 1e-6); }
END_TEST

START_TEST(test_exp_8) { ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 1e-6); }
END_TEST

START_TEST(test_exp_9) {
  ck_assert_double_eq_tol(s21_exp(-21), exp(-21), 1e-6);
}
END_TEST

START_TEST(test_exp_10) {
  ck_assert_double_eq(s21_exp(9999999999999.9), exp(999999999999.9));
}
END_TEST

Suite *exp_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_EXP\t\t\033[0m");
  TCase *tc = tcase_create("tEXP");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_exp_1);
  tcase_add_test(tc, test_exp_2);
  tcase_add_test(tc, test_exp_3);
  tcase_add_test(tc, test_exp_4);
  tcase_add_test(tc, test_exp_5);
  tcase_add_test(tc, test_exp_6);
  tcase_add_test(tc, test_exp_7);
  tcase_add_test(tc, test_exp_8);
  tcase_add_test(tc, test_exp_9);
  tcase_add_test(tc, test_exp_10);

  suite_add_tcase(s, tc);
  return s;
}
