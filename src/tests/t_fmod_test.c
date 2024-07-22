#include "../s21_test.h"

START_TEST(test_fmod_1) { ck_assert_ldouble_nan(s21_fmod(s21_NAN, s21_NAN)); }
END_TEST

START_TEST(test_fmod_2) { ck_assert_ldouble_nan(s21_fmod(-s21_INF, -s21_INF)); }
END_TEST

START_TEST(test_fmod_3) { ck_assert_ldouble_nan(s21_fmod(-s21_INF, s21_INF)); }
END_TEST

START_TEST(test_fmod_4) { ck_assert_ldouble_nan(s21_fmod(s21_INF, s21_INF)); }
END_TEST

START_TEST(test_fmod_5) { ck_assert_ldouble_nan(s21_fmod(s21_NAN, s21_INF)); }
END_TEST

START_TEST(test_fmod_6) { ck_assert_ldouble_nan(s21_fmod(s21_INF, s21_NAN)); }
END_TEST

START_TEST(test_fmod_7) {
  ck_assert_ldouble_eq(s21_fmod(0, s21_INF), fmod(0, INFINITY));
}
END_TEST

START_TEST(test_fmod_8) { ck_assert_ldouble_nan(s21_fmod(s21_INF, 0)); }
END_TEST

START_TEST(test_fmod_9) { ck_assert_ldouble_nan(s21_fmod(s21_NAN, 0)); }
END_TEST

START_TEST(test_fmod_10) { ck_assert_ldouble_nan(s21_fmod(0, s21_NAN)); }
END_TEST

START_TEST(test_fmod_11) { ck_assert_double_nan(s21_fmod(s21_NAN, 1)); }
END_TEST

START_TEST(test_fmod_12) { ck_assert_double_nan(s21_fmod(s21_NAN, 2)); }
END_TEST

START_TEST(test_fmod_13) { ck_assert_double_nan(s21_fmod(s21_NAN, 3)); }
END_TEST

START_TEST(test_fmod_14) { ck_assert_double_nan(s21_fmod(s21_INF, 1)); }
END_TEST

START_TEST(test_fmod_15) { ck_assert_double_nan(s21_fmod(s21_INF, 2)); }
END_TEST

START_TEST(test_fmod_16) { ck_assert_ldouble_nan(s21_fmod(s21_INF, 3)); }
END_TEST

START_TEST(test_fmod_17) {
  ck_assert_double_eq(s21_fmod(2, s21_INF), fmod(2, INFINITY));
}
END_TEST

START_TEST(test_fmod_18) { ck_assert_double_nan(s21_fmod(3, s21_NAN)); }
END_TEST

START_TEST(test_fmod_19) { ck_assert_double_eq(s21_fmod(5, 2), fmod(5, 2)); }
END_TEST

START_TEST(test_fmod_20) { ck_assert_double_nan(s21_fmod(3, 0)); }
END_TEST

START_TEST(test_fmod_21) {
  ck_assert_double_eq(s21_fmod(14134.4231, 9.46821), fmod(14134.4231, 9.46821));
}
END_TEST

START_TEST(test_fmod_22) { ck_assert_double_eq(s21_fmod(-4, 3), fmod(-4, 3)); }
END_TEST

START_TEST(test_fmod_23) {
  ck_assert_double_eq(s21_fmod(-4.34, 3.21), fmod(-4.34, 3.21));
}
END_TEST

START_TEST(test_fmod_24) {
  ck_assert_double_eq(s21_fmod(-4, -3), fmod(-4, -3));
}
END_TEST

START_TEST(test_fmod_25) { ck_assert_double_nan(s21_fmod(0, 0)); }
END_TEST

Suite *fmod_suite(void) {
  Suite *s = suite_create("\033[45m\tS21_FMOD\t\033[0m");
  TCase *tc = tcase_create("tFMOD");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_fmod_1);
  tcase_add_test(tc, test_fmod_2);
  tcase_add_test(tc, test_fmod_3);
  tcase_add_test(tc, test_fmod_4);
  tcase_add_test(tc, test_fmod_5);
  tcase_add_test(tc, test_fmod_6);
  tcase_add_test(tc, test_fmod_7);
  tcase_add_test(tc, test_fmod_8);
  tcase_add_test(tc, test_fmod_9);
  tcase_add_test(tc, test_fmod_10);
  tcase_add_test(tc, test_fmod_11);
  tcase_add_test(tc, test_fmod_12);
  tcase_add_test(tc, test_fmod_13);
  tcase_add_test(tc, test_fmod_14);
  tcase_add_test(tc, test_fmod_15);
  tcase_add_test(tc, test_fmod_16);
  tcase_add_test(tc, test_fmod_17);
  tcase_add_test(tc, test_fmod_18);
  tcase_add_test(tc, test_fmod_19);
  tcase_add_test(tc, test_fmod_20);
  tcase_add_test(tc, test_fmod_21);
  tcase_add_test(tc, test_fmod_22);
  tcase_add_test(tc, test_fmod_23);
  tcase_add_test(tc, test_fmod_24);
  tcase_add_test(tc, test_fmod_25);

  suite_add_tcase(s, tc);
  return s;
}
