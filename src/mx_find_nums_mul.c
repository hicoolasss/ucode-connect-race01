#include "../inc/minilibmx.h"

void mx_find_nums_mul_if_has_right(int operand2, int count_digits_1, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_1) break;

        if (mx_is_equal_to_res((operand2 * i), count_digits_res, res)
            && (operand2 * i) >= 0) {
            mx_print_res(i, operand2, " * ", (operand2 * i));
        }
    }
}
void mx_find_nums_mul_if_has_left(int operand1, int count_digits_2, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_2) break;

        if (mx_is_equal_to_res((operand1 * i), count_digits_res, res)
            && (operand1 * i) >= 0) {
            mx_print_res(operand1, i, " * ", (operand1 * i));
        }
    }
}

void mx_find_nums_mul_if_has_res(int count_digits_1, int count_digits_2, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_1) break;
        
        for (int j = 0;; j++) { 
            if (mx_count_digits(j) > count_digits_2) break;
            
            if (mx_is_equal_to_res((i * j), count_digits_res, res) && (i * j) >= 0) {
                mx_print_res(i, j, " * ", (i * j));
            }
        }
    }
}














