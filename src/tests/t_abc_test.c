#include "../s21_test.h"

START_TEST(test_abs_1) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(test_abs_2) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(test_abs_3) { ck_assert_int_eq(s21_abs(7), abs(7)); }
END_TEST

START_TEST(test_abs_4) { ck_assert_int_eq(s21_abs(-7), abs(-7)); }
END_TEST

Suite *abs_suite() {
  Suite *s = suite_create("\033[45m\tS21_ABS\t\t\033[0m");
  TCase *tc = tcase_create("tABS");

  tcase_add_test(tc, test_abs_1);
  tcase_add_test(tc, test_abs_2);
  tcase_add_test(tc, test_abs_3);
  tcase_add_test(tc, test_abs_4);

  suite_add_tcase(s, tc);
  return s;
}
