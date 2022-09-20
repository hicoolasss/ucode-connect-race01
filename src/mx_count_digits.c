#include "../inc/minilibmx.h"
int mx_count_digits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
