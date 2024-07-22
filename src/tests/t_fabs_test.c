#include "../s21_test.h"

START_TEST(test_fabs_1) { ck_assert_ldouble_eq(fabs(50.0), s21_fabs(50.0)); }
END_TEST

START_TEST(test_fabs_2) { ck_assert_ldouble_eq(fabs(-50.0), s21_fabs(-50.0)); }
END_TEST

START_TEST(test_fabs_3) {
  ck_assert_ldouble_eq(fabs(234242.000001), s21_fabs(234242.000001));
}
END_TEST

START_TEST(test_fabs_4) {
  ck_assert_ldouble_eq(fabs(-234242.000001), s21_fabs(-234242.000001));
}
END_TEST

START_TEST(test_fabs_5) { ck_assert_ldouble_eq(fabs(0.0), s21_fabs(0.0)); }
END_TEST

START_TEST(test_fabs_6) { ck_assert_ldouble_nan(s21_fabs((double)s21_NAN)); }
END_TEST

START_TEST(test_fabs_7) {
  ck_assert_ldouble_eq(fabs((double)INFINITY), s21_fabs((double)s21_INF));
}
END_TEST

START_TEST(test_fabs_8) {
  ck_assert_ldouble_eq(fabs((double)-INFINITY), s21_fabs((double)-s21_INF));
}
END_TEST

Suite *fabs_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_FABS\t\033[0m");
  TCase *tc = tcase_create("tFABS");

  suite_add_tcase(s, tc);

  tcase_add_test(tc, test_fabs_1);
  tcase_add_test(tc, test_fabs_1);
  tcase_add_test(tc, test_fabs_2);
  tcase_add_test(tc, test_fabs_3);
  tcase_add_test(tc, test_fabs_4);
  tcase_add_test(tc, test_fabs_5);
  tcase_add_test(tc, test_fabs_6);
  tcase_add_test(tc, test_fabs_7);
  tcase_add_test(tc, test_fabs_8);

  suite_add_tcase(s, tc);
  return s;
}
