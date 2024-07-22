#include "s21_test.h"

int main() {
  int fail = 0;
  Suite *s[] = {abs_suite(),   fabs_suite(), acos_suite(), asin_suite(),
                atan_suite(),  ceil_suite(), cos_suite(),  exp_suite(),
                floor_suite(), fmod_suite(), log_suite(),  pow_suite(),
                sin_suite(),   sqrt_suite(), tan_suite(),  NULL};
  for (int i = 0; s[i] != NULL; i++) {
    SRunner *runner = srunner_create(s[i]);
    srunner_run_all(runner, CK_NORMAL);
    fail += srunner_ntests_failed(runner);
    srunner_free(runner);
  }
  return fail ? EXIT_FAILURE : EXIT_SUCCESS;
}
