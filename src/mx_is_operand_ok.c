#include "../inc/minilibmx.h"
bool mx_is_operand_ok(const char *operand, int *count_of_digits, int res_or_operand) {
    int d_count = 0;
    int c_count = 0;
    for (int i = 0; operand[i]; i++) {
        if (mx_isdigit(operand[i]) == 1)
            d_count++;
        else if (operand[i] == '?')
            c_count++;
        if (!mx_isdigit(operand[i]) && !mx_isspace(operand[i]) && operand[i] != '?') {
            if (res_or_operand == 0) {
                mx_printerr("Invalid result: ");
                mx_printstr(operand);
                mx_printerr("\n");
            } else {
                mx_printerr("Invalid operand: ");
                mx_printstr(operand);
                mx_printerr("\n");
            }
            return false;
        }
        if (operand[i] == '?')
            *count_of_digits += 1;
    }
    if (d_count == 0 && c_count == 0) {
            mx_printerr("Invalid operand: ");
            mx_printstr(operand);
            mx_printerr("\n");
            return false;
        }
    return true;
}
