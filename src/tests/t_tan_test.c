#include "../s21_test.h"

START_TEST(test_tan_1) {
  ck_assert_double_eq_tol(s21_tan(-100), tan(-100), 1e-6);
}
END_TEST

START_TEST(test_tan_2) {
  ck_assert_double_eq_tol(s21_tan(-256.62347), tan(-256.62347), 1e-6);
}
END_TEST

START_TEST(test_tan_3) { ck_assert_double_eq_tol(s21_tan(3), tan(3), 1e-6); }
END_TEST

START_TEST(test_tan_4) { ck_assert_double_eq_tol(s21_tan(0), tan(0), 1e-6); }
END_TEST

START_TEST(test_tan_5) { ck_assert_double_nan(s21_tan(s21_INF)); }
END_TEST

START_TEST(test_tan_6) { ck_assert_ldouble_nan(s21_tan(s21_NAN)); }
END_TEST

START_TEST(test_tan_7) {
  ck_assert_ldouble_eq_tol(s21_tan(s21_PI), tan(s21_PI), 1e-6);
}
END_TEST

Suite *tan_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_TAN\t\t\033[0m");
  TCase *tc = tcase_create("tTAN");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_tan_1);
  tcase_add_test(tc, test_tan_2);
  tcase_add_test(tc, test_tan_3);
  tcase_add_test(tc, test_tan_4);
  tcase_add_test(tc, test_tan_5);
  tcase_add_test(tc, test_tan_6);
  tcase_add_test(tc, test_tan_7);

  suite_add_tcase(s, tc);
  return s;
}
