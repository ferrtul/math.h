#include "../s21_test.h"

START_TEST(test_pow_1) { ck_assert_ldouble_nan(s21_pow(-0.01, -0.01)); }
END_TEST

START_TEST(test_pow_2) {
  ck_assert_ldouble_eq_tol(s21_pow(2, 2), pow(2, 2), 1e-6);
}
END_TEST

START_TEST(test_pow_3) {
  ck_assert_ldouble_eq_tol(s21_pow(3, 0), pow(3, 0), 1e-6);
}
END_TEST

START_TEST(test_pow_4) {
  ck_assert_ldouble_eq_tol(s21_pow(5, -1), pow(5, -1), 1e-6);
}
END_TEST

START_TEST(test_pow_5) { ck_assert_ldouble_nan(s21_pow(s21_NAN, s21_NAN)); }
END_TEST

START_TEST(test_pow_6) {
  ck_assert_ldouble_eq(s21_pow(s21_INF, s21_INF), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(test_pow_7) {
  ck_assert_ldouble_eq_tol(s21_pow(s21_INF, 0), pow(INFINITY, 0), 1e-6);
}
END_TEST

START_TEST(test_pow_8) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 0), pow(0, 0), 1e-6);
}
END_TEST

START_TEST(test_pow_9) { ck_assert_ldouble_nan(s21_pow(s21_NAN, s21_INF)); }
END_TEST

START_TEST(test_pow_10) { ck_assert_ldouble_nan(s21_pow(s21_INF, s21_NAN)); }
END_TEST

Suite *pow_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_POW\t\t\033[0m");
  TCase *tc = tcase_create("tpow");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_pow_1);
  tcase_add_test(tc, test_pow_2);
  tcase_add_test(tc, test_pow_3);
  tcase_add_test(tc, test_pow_4);
  tcase_add_test(tc, test_pow_5);
  tcase_add_test(tc, test_pow_6);
  tcase_add_test(tc, test_pow_7);
  tcase_add_test(tc, test_pow_8);
  tcase_add_test(tc, test_pow_9);
  tcase_add_test(tc, test_pow_10);

  suite_add_tcase(s, tc);
  return s;
}
