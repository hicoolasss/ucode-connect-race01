#pragma once
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
bool mx_is_operand_ok(const char *operand, int *count_of_digits, int res_or_operand);
bool mx_is_operation_ok(const char *operation, int *sign);
bool mx_is_equal_to_res(int num, int count_digits_res, int res);


void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
void mx_strdel(char **str);


int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_atoi(const char *str);
int mx_count_digits(int num);
int mx_strncmp(const char *s1, const char *s2, int n);


char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int n);
char *mx_strtrim(const char *str);

void mx_print_res(int operand1, int operand2, const char *sign, int res);

void mx_find_nums_plus(int count_digits_1, int count_digits_2, int count_digits_res, int res);
void mx_find_nums_plus_if_have_right(int operand2, int count_digits_1, int count_digits_res, int res);
void mx_find_nums_plus_if_have_left(int operand1, int count_digits_2, int count_digits_res, int res);


void mx_find_nums_minus(int count_digits_1, int count_digits_2, int count_digits_res, int res);
void mx_find_nums_minus_if_has_right(int operand2, int count_digits_1, int count_digits_res, int res);
void mx_find_nums_minus_if_has_left(int operand1, int count_digits_res, int res);


void mx_find_nums_div_if_has_res(int count_digits_1, int count_digits_2, int count_digits_res, int res);
void mx_find_nums_div_if_has_right(int operand2, int count_digits_1, int count_digits_res, int res);
void mx_find_nums_div_if_has_left(int operand1, int count_digits_2, int count_digits_res, int res);


void mx_find_nums_mul_if_has_right(int operand2, int count_digits_1, int count_digits_res, int res);
void mx_find_nums_mul_if_has_left(int operand1, int count_digits_2, int count_digits_res, int res);
void mx_find_nums_mul_if_has_res(int count_digits_1, int count_digits_2, int count_digits_res, int res);



