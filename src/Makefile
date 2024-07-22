CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 

OS = $(shell uname)
ifeq ($(OS), Linux)
	TEST_FLAGS = -lcheck -lm -lsubunit -lpthread
else
	TEST_FLAGS = -lcheck -lm -lpthread
endif

all: s21_math.a

rebuild: clean all

test: s21_math.a clean
	$(CC) $(CFLAGS) -c tests/t_*.c test.c
	ar rc suite_cases.a t_*.o
	ranlib suite_cases.a
	$(CC) $(CFLAGS) --coverage suite_cases.a test.o s21_*.c $(TEST_FLAGS) -o s21_test

gcov_report: test
	./s21_test
	lcov -t "coverage" -o unit_test.info -c -d .
	genhtml -o report unit_test.info
	open report/index.html

s21_math.a: s21_*.c
	$(CC) $(CFLAGS) -c s21_*.c
	ar rcs s21_math.a s21_*.o

style:
	clang-format -n -style=google *.c *.h
	clang-format -n -style=google tests/*.c

clean:
	rm -f *.gcda *.gcno *.info gcov_test *.o *.a s21_test
	rm -rf report/

