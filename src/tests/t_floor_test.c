#include "../s21_test.h"

START_TEST(test_floor_1) {
  ck_assert_double_eq_tol(s21_floor(-0.000001), floor(-0.000001), 1e-6);
}
END_TEST

START_TEST(test_floor_2) {
  ck_assert_double_eq_tol(s21_floor(13.2), floor(13.2), 1e-6);
}
END_TEST

START_TEST(test_floor_3) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(test_floor_4) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(test_floor_5) { ck_assert_ldouble_nan(s21_floor(s21_NAN)); }
END_TEST

START_TEST(test_floor_6) {
  ck_assert_double_eq_tol(s21_floor(4.5), floor(4.5), 1e-6);
}
END_TEST

START_TEST(test_floor_7) {
  ck_assert_double_eq_tol(s21_floor(5), floor(5), 1e-6);
}
END_TEST

Suite *floor_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_floor\t\033[0m");
  TCase *tc = tcase_create("tFLOOR");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_floor_1);
  tcase_add_test(tc, test_floor_2);
  tcase_add_test(tc, test_floor_3);
  tcase_add_test(tc, test_floor_4);
  tcase_add_test(tc, test_floor_5);
  tcase_add_test(tc, test_floor_6);
  tcase_add_test(tc, test_floor_7);

  suite_add_tcase(s, tc);
  return s;
}
