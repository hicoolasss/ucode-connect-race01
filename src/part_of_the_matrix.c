#include "../inc/minilibmx.h"
int main(int argc, char *argv[]) {
    int operand1 = 0;
    int operand2 = 0;

    int count_digits_1 = 0;
    int count_digits_2 = 0;
    int count_digits_res = 0;
    int res = -1;
    int sign = -1;
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]");
        mx_printerr("\n");
        return -1;
    }
    if (!mx_is_operand_ok(argv[1], &count_digits_1, 1)) return -1;
    if (!mx_is_operand_ok(argv[3], &count_digits_2, 1)) return -1;
    if (!mx_is_operand_ok(argv[4], &count_digits_res, 0)) return -1;
    if (!mx_is_operation_ok(mx_strtrim(argv[2]), &sign)) return -1;
    if (count_digits_1 == 0)
        operand1 = mx_atoi(argv[1]);    
    if (count_digits_2 == 0)
        operand2 = mx_atoi(argv[3]);
    if (count_digits_res == 0)
        res = mx_atoi(argv[4]);
    if (sign == 3) { //если знак "+"
        if (operand1 != 0 && operand2 != 0) {
        if (mx_is_equal_to_res(operand1 + operand2, count_digits_res, res)){
                mx_print_res(operand1, operand2, " + ", (operand1 + operand2));
        } else return -1;
        }
        else if (count_digits_2 == 0 && count_digits_1 > 0) //есть правый нету левого
            mx_find_nums_plus_if_have_right(operand2, count_digits_1,
                                            count_digits_res, res);
        else if (count_digits_1 == 0 && count_digits_2 > 0) //есть левый нету правого
            mx_find_nums_plus_if_have_left(operand1, count_digits_2, 
                                           count_digits_res, res);
        else if (count_digits_1 > 0 && count_digits_2 > 0) //нету ни того ни другого
            mx_find_nums_plus(count_digits_1, count_digits_2, 
                              count_digits_res, res);
    }
    if (sign == 2) { //если знак "-"
        if (operand1 != 0 && operand2 != 0) {
            if (mx_is_equal_to_res(operand1 - operand2, count_digits_res, res)){
                mx_print_res(operand1, operand2, " - ", (operand1 - operand2));
        } else return -1;
        }
        else if (count_digits_2 == 0 && count_digits_1 > 0) //если есть правый операнд (известный) но без левого
            mx_find_nums_minus_if_has_right(operand2, count_digits_1,
                                            count_digits_res, res);
        else if (count_digits_1 == 0 && count_digits_2 > 0) //есть левый нету правого
            mx_find_nums_minus_if_has_left(operand1, 
                                           count_digits_res, res);
        else if (count_digits_1 > 0 && count_digits_2 > 0) //нету ни того ни другого
            mx_find_nums_minus(count_digits_1, count_digits_2, 
                               count_digits_res, res);
    }
    if (sign == 1) { //если знак "*"
        if (operand1 != 0 && operand2 != 0) {
            if (mx_is_equal_to_res(operand1 * operand2, count_digits_res, res)){
                mx_print_res(operand1, operand2, " * ", (operand1 * operand2));
        } else return -1;
        }
        if (count_digits_2 == 0 && count_digits_1 > 0)
            mx_find_nums_mul_if_has_right(operand2, count_digits_1,
                                          count_digits_res, res);
        else if (count_digits_1 == 0 && count_digits_2 > 0)
            mx_find_nums_mul_if_has_left(operand1, count_digits_2, 
                                         count_digits_res, res);
        else if(count_digits_1 > 0 && count_digits_2 > 0)
            mx_find_nums_mul_if_has_res(count_digits_1, count_digits_2,
                                        count_digits_res, res);
    }
    if (sign == 0) { //если знак "/"
        if (operand1 != 0 && operand2 != 0) {
            if (mx_is_equal_to_res(operand1 / operand2, count_digits_res, res)){
                mx_print_res(operand1, operand2, " / ", (operand1 / operand2));
        } else return -1;
        }
        if (count_digits_2 == 0 && count_digits_1 > 0)
            mx_find_nums_div_if_has_right(operand2, count_digits_1, 
                                          count_digits_res, res);
        else if (count_digits_1 == 0 && count_digits_2 > 0)
            mx_find_nums_div_if_has_left(operand1, count_digits_2, 
                                         count_digits_res, res);
        else if(count_digits_1 > 0 && count_digits_2 > 0)
            mx_find_nums_div_if_has_res(count_digits_1, count_digits_2, 
                                        count_digits_res, res);
    }
    return 0;
}
