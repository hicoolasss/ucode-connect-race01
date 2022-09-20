#include "../inc/minilibmx.h"

void mx_find_nums_plus(int count_digits_1, int count_digits_2, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_1) break;
        
        for (int j = 0;; j++) {
            if (mx_count_digits(j) > count_digits_2) break;
        
            if (mx_count_digits(i + j) > count_digits_res && res == -1) break;
        
            if (mx_is_equal_to_res((i + j), count_digits_res, res)) {
                mx_print_res(i, j, " + ", (i + j));
            }
        }
    }
}

void mx_find_nums_plus_if_have_right(int operand2, int count_digits_1, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_1) break;
        
        if (mx_is_equal_to_res((i + operand2), count_digits_res, res)) {
            mx_print_res(i, operand2, " + ", (i + operand2));
        }
    }
}


void mx_find_nums_plus_if_have_left(int operand1, int count_digits_2, int count_digits_res, int res) {
    for (int i = 0;; i++) {
        if (mx_count_digits(i) > count_digits_2) break;
        
        if (mx_is_equal_to_res((i + operand1), count_digits_res, res)) {
            mx_print_res(operand1, i, " + ", (i + operand1));
        }
    }
} 



