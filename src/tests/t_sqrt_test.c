#include "../s21_test.h"

START_TEST(test_sqrt1) { ck_assert_ldouble_nan(s21_sqrt(-0.01)); }
END_TEST

START_TEST(test_sqrt2) {
  ck_assert_ldouble_eq(s21_sqrt(s21_INF), sqrt(INFINITY));
}
END_TEST

START_TEST(test_sqrt3) { ck_assert_ldouble_nan(s21_sqrt(s21_NAN)); }
END_TEST

START_TEST(test_sqrt4) {
  ck_assert_ldouble_nan(s21_sqrt(-INFINITY));
  ;
}
END_TEST

START_TEST(test_sqrt5) { ck_assert_ldouble_nan(s21_sqrt(-20)); }
END_TEST

START_TEST(test_sqrt6) { ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6); }
END_TEST

START_TEST(test_sqrt7) { ck_assert_ldouble_eq_tol(s21_sqrt(4), sqrt(4), 1e-6); }
END_TEST

START_TEST(test_sqrt8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(123), sqrt(123), 1e-6);
}
END_TEST

START_TEST(test_sqrt9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(234523.3245), sqrt(234523.3245), 1e-6);
}
END_TEST

START_TEST(test_sqrt10) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.3245), sqrt(0.3245), 1e-6);
}
END_TEST

Suite *sqrt_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_SQRT\t\033[0m");
  TCase *tc = tcase_create("tSQRT");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_sqrt1);
  tcase_add_test(tc, test_sqrt2);
  tcase_add_test(tc, test_sqrt3);
  tcase_add_test(tc, test_sqrt4);
  tcase_add_test(tc, test_sqrt5);
  tcase_add_test(tc, test_sqrt6);
  tcase_add_test(tc, test_sqrt7);
  tcase_add_test(tc, test_sqrt8);
  tcase_add_test(tc, test_sqrt9);
  tcase_add_test(tc, test_sqrt10);

  suite_add_tcase(s, tc);
  return s;
}
