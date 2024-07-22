#include "../s21_test.h"

START_TEST(test_atan_1) {
  ck_assert_double_eq_tol(s21_atan(-100000), atan(-100000), 1e-6);
}
END_TEST

START_TEST(test_atan_2) {
  ck_assert_double_eq_tol(s21_atan(-256.62347), atan(-256.62347), 1e-6);
}
END_TEST

START_TEST(test_atan_3) {
  ck_assert_double_eq_tol(s21_atan(0.000001), atan(0.000001), 1e-6);
}
END_TEST

START_TEST(test_atan_4) { ck_assert_double_eq_tol(s21_atan(0), atan(0), 1e-6); }
END_TEST

START_TEST(test_atan_5) {
  ck_assert_double_eq(s21_atan(s21_INF), atan(INFINITY));
}
END_TEST

START_TEST(test_atan_6) {
  ck_assert_double_eq(s21_atan(-s21_INF), atan(-INFINITY));
}
END_TEST

START_TEST(test_atan_7) { ck_assert_ldouble_nan(s21_atan(s21_NAN)); }
END_TEST

Suite *atan_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_ATAN\t\033[0m");
  TCase *tc = tcase_create("tATAN");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_atan_1);
  tcase_add_test(tc, test_atan_2);
  tcase_add_test(tc, test_atan_3);
  tcase_add_test(tc, test_atan_4);
  tcase_add_test(tc, test_atan_5);
  tcase_add_test(tc, test_atan_6);
  tcase_add_test(tc, test_atan_7);

  suite_add_tcase(s, tc);
  return s;
}
