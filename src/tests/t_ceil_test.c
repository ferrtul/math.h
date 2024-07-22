#include "../s21_test.h"

START_TEST(test_ceil_1) {
  ck_assert_double_eq_tol(s21_ceil(-0.000001), ceil(-0.000001), 1e-6);
}
END_TEST

START_TEST(test_ceil_2) {
  ck_assert_double_eq_tol(s21_ceil(13.2), ceil(13.2), 1e-6);
}
END_TEST

START_TEST(test_ceil_3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(test_ceil_4) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(test_ceil_5) { ck_assert_ldouble_nan(s21_ceil(s21_NAN)); }
END_TEST

START_TEST(test_ceil_6) {
  ck_assert_double_eq_tol(s21_ceil(4.5), ceil(4.5), 1e-6);
}
END_TEST

START_TEST(test_ceil_7) { ck_assert_double_eq_tol(s21_ceil(5), ceil(5), 1e-6); }
END_TEST

Suite *ceil_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_CEIL\t\033[0m");
  TCase *tc = tcase_create("tCEIL");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_ceil_1);
  tcase_add_test(tc, test_ceil_2);
  tcase_add_test(tc, test_ceil_3);
  tcase_add_test(tc, test_ceil_4);
  tcase_add_test(tc, test_ceil_5);
  tcase_add_test(tc, test_ceil_6);
  tcase_add_test(tc, test_ceil_7);

  suite_add_tcase(s, tc);
  return s;
}
