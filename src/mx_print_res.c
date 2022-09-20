#include "../inc/minilibmx.h"

void mx_print_res(int operand1, int operand2, const char *sign, int res) {
    mx_printint(operand1);
    mx_printstr(sign);
    mx_printint(operand2);
    mx_printstr(" = ");
    mx_printint(res);
    mx_printchar('\n');
}
