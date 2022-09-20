#include "../inc/minilibmx.h"
bool mx_is_operation_ok(const char *operation, int *sign) {
    if (mx_strlen(operation) > 1 || mx_strncmp(operation, "?", 1) == 0) {
        mx_printerr("Invalid operation: ");
        mx_printerr(operation);
        mx_printerr("\n");
        return false;
    } else if (mx_strncmp(operation, "+", 1) == 0) {
        *sign = 3;
        return true;
    } else if (mx_strncmp(operation, "-", 1) == 0) {
        *sign = 2;
        return true;
    } else if (mx_strncmp(operation, "*", 1) == 0) {
        *sign = 1;
        return true;
    } else if (mx_strncmp(operation, "/", 1) == 0) {
        *sign = 0;
        return true;
    } 
    mx_printerr("Invalid operation: ");
    mx_printerr(operation);
    mx_printerr("\n");
    return false;
}
